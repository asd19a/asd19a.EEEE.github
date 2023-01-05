#define _CRT_SECURE_NO_WARNINGS

#include "Contact.h"


void Innitcon(contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}


void addcontact(contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法添加\n");
		return;
	}
	
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
}

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

void delcontact(contact* pc)
{
	int i = 0;
	char name[MAX_NAME];
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	while (1)
	{
		printf("请输入要删除的人的姓名:>");
		scanf("%s", name);
		int pos = fine(pc, name);
		if (pos == -1)
		{
			printf("查无此人,重新输入\n");
		}
		else
		{
			for (i = pos; i < pc->sz - 1; i++)
			{
				pc->data[i] = pc->data[i + 1];
			}
			break;
		}
	}
	pc->sz--;
	printf("删除成功\n");
}

void searchcontact(const contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法查找\n");
		return;
	}
	char name[MAX_NAME];
	while (1)
	{
		printf("请输入要查找的人的姓名:>");
		scanf("%s", name);
		int pos = fine(pc, name);
		if (pos == -1)
		{
			printf("查无此人,重新输入\n");
		}
		else
		{
			printf("%-15s\t%-5s\t%-10s\t%-20s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
			printf("%-15s\t%-5d\t%-10s\t%-20s\t%-20s\n", pc->data[pos].name,
														 pc->data[pos].age,
														 pc->data[pos].sex,
														 pc->data[pos].tele,
														 pc->data[pos].addr);
			break;
		}
	}
	
}

void modifycontact(contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空,无法修改\n");
		return;
	}
	char name[MAX_NAME];
	while (1)
	{
		printf("请输入要修改的人的姓名:>");
		scanf("%s", name);
		int pos = fine(pc, name);
		if (pos == -1)
		{
			printf("通讯录中无此人,重新输入\n");
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
}

int cmp(const void* e1, const void* e2)
{
	return strcmp(((contact*)e1)->data[0].name, ((contact*)e2)->data[1].name);
}

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