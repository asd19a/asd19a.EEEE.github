#define _CRT_SECURE_NO_WARNINGS

#include "Contact.h"

//静态初始化
//void Innitcon(contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

void download(contact* pc)
{
	FILE* pf = fopen("D:\\C\\c-code\\Contact.c\\Contact.c\\contact.txt", "r");
	if (pf == NULL)
	{
		perror("download");
		return;
	}
	//peocon tmp = { 0 };
	while ((fscanf(pf, "%s %d %s %s %s", pc->data[pc->sz].name,
										&(pc->data[pc->sz].age),
										pc->data[pc->sz].sex,
										pc->data[pc->sz].tele,
										pc->data[pc->sz].addr))<5)
	{
		checkcapacity(pc);
		pc->sz++;
	}
	fclose(pf);
	pf = NULL;
}

//动态初始化
void Innition(contact* pc)
{
	pc->sz = 0;
	pc->data = (peocon*)calloc(DEFAULT_SZ, sizeof(peocon));
	pc->capacity = DEFAULT_SZ;
	download(pc);
}

//静态添加联系人
//void addcontact(contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//	
//		printf("请输入姓名:>");
//		scanf("%s", pc->data[pc->sz].name);
//		printf("请输入年龄:>");
//		scanf("%d", &(pc->data[pc->sz].age));
//		printf("请输入性别:>");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("请输入电话:>");
//		scanf("%s", pc->data[pc->sz].tele);
//		printf("请输入地址:>");
//		scanf("%s", pc->data[pc->sz].addr);
//	
//	pc->sz++;
//	printf("添加成功\n");
//}


void checkcapacity(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		printf("通讯录已满，开始扩容\n");
		peocon* ptr = (peocon*)realloc(pc->data, (DEFAULT_SZ + INC_SZ) * sizeof(peocon));
		if (ptr == NULL)
		{
			printf("扩容失败\n");
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("扩容成功\n");
		}
	}
}

//动态添加联系人
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
			checkcapacity(pc);
			printf("开始添加\n");
			printf("请输入姓名:>");
			scanf("%s", pc->data[pc->sz].name);
			printf("请输入年龄:>");
			scanf("%d", &(pc->data[pc->sz].age));
			printf("请输入性别:>");
			scanf("%s", pc->data[pc->sz].sex);
			printf("请输入电话:>");
			scanf("%s", pc->data[pc->sz].tele);
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
			printf("输入错误，重新输入\n");
			break;

		}
	} while (input);
}


//打印通讯录
void printcontact(const contact* pc)
{
	printf("%-15s\t%-5s\t%-10s\t%-20s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-15s\t%-5d\t%-10s\t%-20s\t%-20s\n", pc->data[i].name,
													 pc->data[i].age,
													 pc->data[i].sex,
													 pc->data[i].tele,
													 pc->data[i].addr);
	}
}

//寻找联系人
int fine(contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
			return i;
	}
	return -1;
}


//删除联系人
void delcontact(contact* pc)
{
	int i = 0;
	char name[MAX_NAME];
	int input = 0;
	do
	{
		printf("按1继续，按0返回:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			if (pc->sz == 0)
			{
				printf("通讯录为空，无法删除\n");
				return;
			}
			while (1)
			{
				again:
				printf("请输入要删除的人的姓名:>");
				scanf("%s", name);
				int pos = fine(pc, name);
				if (pos == -1)
				{
					printf("查无此人,按0结束，其他继续:>");
					int ret = 0;
					scanf("%d", &ret);
					if (ret == 0)
						return;
					else
						goto again;

				}
				else
				{
					printf("开始删除\n");
					for (i = pos; i < pc->sz - 1; i++)
					{
						pc->data[i] = pc->data[i + 1];
					}
					break;
				}
			}
			pc->sz--;
			printf("删除成功\n");
			break;
		case 0:
			printf("返回\n");
			return;
			break;
		default :
			printf("输入错误，重新输入\n");
			break;

		}
	} while (input);
}


//查找联系人
void searchcontact(const contact* pc)
{
	int input = 0;
	do
	{
		printf("按1继续，按0返回:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			if (pc->sz == 0)
			{
				printf("通讯录为空，无法查找\n");
				return;
			}
			char name[MAX_NAME];
			while (1)
			{
				again:
				printf("请输入要查找的人的姓名:>");
				scanf("%s", name);
				int pos = fine(pc, name);
				printf("开始查找\n");
				if (pos == -1)
				{
					printf("查无此人,按0结束,其它继续:>");
					int ret = 0;
					scanf("%d", &ret);
					if (ret == 0)
						return;
					else
						goto again;

				}
				else
				{
					printf("查找成功\n");
					printf("%-15s\t%-5s\t%-10s\t%-20s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
					printf("%-15s\t%-5d\t%-10s\t%-20s\t%-20s\n", pc->data[pos].name,
						pc->data[pos].age,
						pc->data[pos].sex,
						pc->data[pos].tele,
						pc->data[pos].addr);
					break;
				}
			}
			break;
		case 0:
			printf("返回\n");
			return;
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
		

	} while (input);
	
}


//修改通讯录
void modifycontact(contact* pc)
{
	int input = 0;
	do
	{
		printf("按1继续，按0返回:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			if (pc->sz == 0)
			{
				printf("通讯录为空,无法修改\n");
				return;
			}
			char name[MAX_NAME];
			while (1)
			{
				again:
				printf("请输入要修改的人的姓名:>");
				scanf("%s", name);
				int pos = fine(pc, name);
				printf("开始修改\n");
				if (pos == -1)
				{
					printf("通讯录中无此人,按0结束，其它继续:>");
					int ret = 0;
					scanf("%d", &ret);
					if (ret == 0)
						return;
					else
						goto again;

					
				}
				else
				{
					printf("请输入姓名:>");
					scanf("%s", pc->data[pos].name);
					printf("请输入年龄:>");
					scanf("%d", &(pc->data[pos].age));
					printf("请输入性别:>");
					scanf("%s", pc->data[pos].sex);
					printf("请输入电话:>");
					scanf("%s", pc->data[pos].tele);
					printf("请输入地址:>");
					scanf("%s", pc->data[pos].addr);
					break;
				}
			}
			printf("修改成功\n");
			break;
		case 0:
			printf("返回\n");
			return;
			break;
		default:
			printf("输入错误，重新输入\n");
			break;

		}
	} while (input);
}

int cmp(const void* e1, const void* e2)
{
	return strcmp(((contact*)e1)->data[0].name, ((contact*)e2)->data[1].name);
}


//排序通讯录
void sortcontact(contact* pc)
{
	if (pc->sz < 2)
	{
		printf("通讯录数据不足,无法排序\n");
		return;
	}
	qsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp);
	printf("排序成功\n");
}

//销毁通讯录
void destroycontact(contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;

}

void savecontact(contact* pc)
{
	FILE* pf = fopen("D:\\C\\c-code\\Contact.c\\Contact.c\\contact.txt", "w");
	if (pf == NULL)
	{
		perror("savecontact");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fprintf(pf,"%-15s\t%-5d\t%-10s\t%-20s\t%-20s\n", pc->data[i].name,
														 pc->data[i].age,
														 pc->data[i].sex,
														 pc->data[i].tele,
														 pc->data[i].addr);
	}
	fclose(pf);
	pf = NULL;
}