#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

//将文件中的联系人信息读入
void download(contact* pc)
{
	FILE* pf = fopen("D:\\C\\c-code\\CONTACT\\CONTACT\\contact.txt", "r");  //以只读的方式打开文件
	if (pf == NULL)  //判断文件是否打开成功
	{
		perror("fopen");
		return;
	}
	
	peoinfo tmp = { 0 };
	while (fread(&tmp, sizeof(peoinfo), 1, pf))
	{
		inccapacity(pc);  //增容函数
		pc->data[pc->sz] = tmp;  //将联系人信息写入 data 中
		pc->sz++;  //记录写入联系人的数量
	}
	fclose(pf);  //关闭文件
	pf = NULL;
}

//保存文件中的联系人信息
void savecontact(contact* pc)
{
	FILE* pf = fopen("D:\\C\\c-code\\CONTACT\\CONTACT\\contact.txt", "w");  //以只写的方式打开文件
	if (pf == NULL)  //判断文件是否打开成功
	{
		perror("savecontact");
		return;
	}
	int i = 0;
	/*fprintf(pf, "%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->sz; i++)
	{
		fprintf(pf,"%-20s\t%-5d\t%-10s\t%-20s\t%-30s\n", pc->data[i].name,
														 pc->data[i].age,
														 pc->data[i].sex,
														 pc->data[i].tel,
														 pc->data[i].addr);
	}*/
	for (i = 0; i < pc->sz; i++)   
	{
		fwrite(pc->data + i, sizeof(peoinfo), 1, pf);  //向文件中写入通讯录的数据
	}
	fclose(pf);  //数据写完后，关闭文件
	pf = NULL;
}

//销毁通讯录
void destroycontact(contact* pc)
{
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;  //容量回复默认值
	free(pc->data);  //释放之前开辟的内存
	pc->data = NULL;  //指针置空，防止野指针的出现
}

//动态初始化联系人
void Innitcontact(contact* pc)
{
	pc->data = (peoinfo*)calloc(DEFAULT_SZ, sizeof(peoinfo));  //动态内存开辟，实现通讯录的动态
	if (pc->data == NULL)  //判断内存开辟是否成功
	{
		perror("Innitcontact");
		return;
	}
	pc->sz = 0;  //初始化通讯录实时容量，也可用作下标
	pc->capacity = DEFAULT_SZ;  //初始化容量
	download(pc);  //加载文件中联系人的信息
}


//打印通讯录
void printcontact(contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");  //打印的格式可以根据个人喜好来
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-10s\t%-20s\t%-30s\n", pc->data[i].name,
													 pc->data[i].age,
													 pc->data[i].sex,
													 pc->data[i].tel,
													 pc->data[i].addr);
	}
}

//是否增容
void inccapacity(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		printf("通讯录已满,开始增容\n");
	    peoinfo* ptr = (peoinfo*)realloc(pc->data,(DEFAULT_SZ+INC_SZ)*sizeof(peoinfo));  //利用 realloc 进行内存的再次动态开辟，实现通讯录的增容
		
		if(ptr == NULL)  //判断内存是否开辟成功
		{
			printf("增容失败\n");
			perror("inccapacity");
			return;
		}
		else
		{
			pc->data = ptr;   //将扩容后的通讯录首地址赋给原来的通讯录
			pc->capacity += INC_SZ;  //容量增加
			printf("增容成功\n");
		}
	}
}

//查找联系人
int find(char tmp[], contact* pc)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(tmp, pc->data[i].name) == 0)  //因为姓名是字符串，所以利用字符串比较函数
		{
			return i;  //查找成功返回其下标
		}
	}
	return -1;  //失败则返回-1
}

//添加联系人
void addcontact(contact* pc)
{
	int input = 0;
	do
	{
		
		printf("按1继续，按0返回:>");  //利用 do ... while 结构实现联系人的多次添加
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			inccapacity(pc);  //判断容量是否已满，若已满，则进行增容
			printf("开始添加\n");  //联系人各种信息的录入
			printf("请输入姓名:>");
			scanf("%s", pc->data[pc->sz].name);
			printf("请输入年龄:>");
			scanf("%d", &(pc->data[pc->sz].age));
			printf("请输入性别:>");
			scanf("%s", pc->data[pc->sz].sex);
			printf("请输入电话:>");
			scanf("%s", pc->data[pc->sz].tel);
			printf("请输入地址:>");
			scanf("%s", pc->data[pc->sz].addr);
			pc->sz++;  //添加成功后，通讯录实时容量增加1
			printf("添加成功\n");
			break;
		case 0:
			printf("返回\n");
			return;
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
}

//删除联系人
void delcontact(contact* pc)
{
	char tmp[MAX_NAME];  
	int pos = 0, i = 0;
	if (pc->sz == 0)  //判断通讯录有无数据
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	while (1)
	{
	again:
		printf("请输入要删除的人的姓名:>");
		scanf("%s", tmp);
		pos = find(tmp, pc);  //查找要删除人的下标
		if (pos == -1)
		{
			printf("要删除的人不存在,重新输入\n");
			goto again;
		}
		else
			break;
	}
	printf("开始删除\n");
	for (i = pos; i < pc->sz - 1; i++)  //从返回的下标 pos 开始 ,之后的每个元素向前移动一位
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;  //删除成功即通讯录的实时容量减去1
	printf("删除成功\n");
}

//查找联系人
void searchcontact(contact* pc)
{
	char name[MAX_NAME];
	int pos = 0;
	if (pc->sz == 0)    //判断通讯录中是否有数据
	{
		printf("通讯录为空，无法查询\n");
		return;
	}
	while (1)
	{
		again:
		printf("请输入要查找人的姓名:>");
		scanf("%s", name);
		pos = find(name, pc);  //调用 fing 函数，并返回其下标
		if (pos == -1)
		{
			printf("查无此人，重新查询\n");  //查询失败则继续
			goto again;
		}
		else
			break;
	}
	printf("查询成功\n");
	printf("%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");   //打印该联系人的信息
	printf("%-20s\t%-5d\t%-10s\t%-20s\t%-30s\n", pc->data[pos].name,
												 pc->data[pos].age,
												 pc->data[pos].sex,
												 pc->data[pos].tel,
												 pc->data[pos].addr);
	
}

//修改联系人
void modifycontact(contact* pc)
{
	if (pc->sz == 0)  //判断通讯录是否有数据
	{
		printf("通讯录为空，无法修改\n");
		return;
	}
	char name[MAX_NAME];
	int pos = 0;
	while (1)
	{
		again:
		printf("请输入要修改的联系人的姓名:>");
		scanf("%s", name);
		pos = find(name, pc);  //返回要修改的联系人的下标
		if (pos == -1)
		{
			printf("要修改的联系人不存在，重新输入\n");
			goto again;
		}
		else
			break;
	}
	printf("开始修改\n");  //修改联系人信息
	printf("请输入姓名:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pos].tel);
	printf("请输入地址:>");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功\n");
}

//int cmp(const void* e1, const void* e2)
//{
//	int ret = strcmp(((contact*)e1)->data[0].name, ((contact*)e2)->data[1].name);
//	return ret;
//}

//排序通讯录
void sortcontact(contact* pc)
{
	if (pc->sz < 2)
	{
		printf("通讯录数据不足，无法排序\n");  //判断是否支持排序
		return;
	}
	int i = 0, j = 0;
	sort S;  //变量的创建
	S.sort= (peoinfo*)calloc(pc->capacity, sizeof(peoinfo));  //sort 的初始化
	if (S.sort == NULL) //判断动态内存是否开辟成功
	{
		perror("sortcontact");
		return;
	}
	printf("开始排序\n");
	//qsort(pc, pc->sz, sizeof(peoinfo), cmp);
	for (i = 0; i < pc->sz - 1; i++)   //排序算法
	{
		for (j = i + 1; j < pc->sz; j++)
		{
			if (strcmp(pc->data[i].name, pc->data[j].name) > 0)
			{
				S.sort[i] = pc->data[i];  //交换元素
				pc->data[i] = pc->data[j];
				pc->data[j] = S.sort[i];
			}
		}
	}
	printf("排序成功\n");
	free(S.sort);  //排序成功后释放所开辟的内存
	S.sort = NULL;  //将指针置空，防止使用野指针
}