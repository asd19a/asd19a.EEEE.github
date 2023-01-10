#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

//将文件中的联系人信息读入
void download(contact* pc)
{
	FILE* pf = fopen("D:\\C\\c-code\\CONTACT\\CONTACT\\contact.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	
	peoinfo tmp = { 0 };
	while (fread(&tmp, sizeof(peoinfo), 1, pf))
	{
		inccapacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	fclose(pf);
	pf = NULL;
}

//保存文件中的联系人信息
void savecontact(contact* pc)
{
	FILE* pf = fopen("D:\\C\\c-code\\CONTACT\\CONTACT\\contact.txt", "w");
	if (pf == NULL)
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
		fwrite(pc->data + i, sizeof(peoinfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}

//销毁通讯录
void destroycontact(contact* pc)
{
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	free(pc->data);
	pc->data = NULL;
}

//动态初始化联系人
void Innitcontact(contact* pc)
{
	pc->data = (peoinfo*)calloc(DEFAULT_SZ, sizeof(peoinfo));
	if (pc->data == NULL)
	{
		perror("Innitcontact");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	download(pc);
}


//打印通讯录
void printcontact(contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
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
	    peoinfo* ptr = (peoinfo*)realloc(pc->data,(DEFAULT_SZ+INC_SZ)*sizeof(peoinfo));
		
		if(ptr == NULL)
		{
			printf("增容失败\n");
			perror("inccapacity");
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
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
		if (strcmp(tmp, pc->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//添加联系人
void addcontact(contact* pc)
{
	int input = 0;
	do
	{
		
		printf("按1继续，按0返回:>");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			inccapacity(pc);
			printf("开始添加\n");
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
			pc->sz++;
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
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	while (1)
	{
	again:
		printf("请输入要删除的人的姓名:>");
		scanf("%s", tmp);
		pos = find(tmp, pc);
		if (pos == -1)
		{
			printf("要删除的人不存在,重新输入\n");
			goto again;
		}
		else
			break;
	}
	printf("开始删除\n");
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}

//查找联系人
void searchcontact(contact* pc)
{
	char name[MAX_NAME];
	int pos = 0;
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法查询\n");
		return;
	}
	while (1)
	{
		again:
		printf("请输入要查找人的姓名:>");
		scanf("%s", name);
		pos = find(name, pc);
		if (pos == -1)
		{
			printf("查无此人，重新查询\n");
			goto again;
		}
		else
			break;
	}
	printf("查询成功\n");
	printf("%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%-20s\t%-5d\t%-10s\t%-20s\t%-30s\n", pc->data[pos].name,
												 pc->data[pos].age,
												 pc->data[pos].sex,
												 pc->data[pos].tel,
												 pc->data[pos].addr);
	
}

//修改联系人
void modifycontact(contact* pc)
{
	if (pc->sz == 0)
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
		pos = find(name, pc);
		if (pos == -1)
		{
			printf("要修改的联系人不存在，重新输入\n");
			goto again;
		}
		else
			break;
	}
	printf("开始修改\n");
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
		printf("通讯录数据不足，无法排序\n");
		return;
	}
	int i = 0, j = 0;
	sort S;
	S.sort= (peoinfo*)calloc(pc->capacity, sizeof(peoinfo));
	if (S.sort == NULL)
	{
		perror("sortcontact");
		return;
	}
	printf("开始排序\n");
	//qsort(pc, pc->sz, sizeof(peoinfo), cmp);
	for (i = 0; i < pc->sz - 1; i++)
	{
		for (j = i + 1; j < pc->sz; j++)
		{
			if (strcmp(pc->data[i].name, pc->data[j].name) > 0)
			{
				S.sort[i] = pc->data[i];
				pc->data[i] = pc->data[j];
				pc->data[j] = S.sort[i];
			}
		}
	}
	printf("排序成功\n");
}