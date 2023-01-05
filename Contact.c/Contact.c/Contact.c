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
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	
		printf("����������:>");
		scanf("%s", pc->data[pc->sz].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pc->sz].addr);
	
	pc->sz++;
	printf("��ӳɹ�\n");
}

void printcontact(const contact* pc)
{
	printf("%-15s\t%-5s\t%-10s\t%-20s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	while (1)
	{
		printf("������Ҫɾ�����˵�����:>");
		scanf("%s", name);
		int pos = fine(pc, name);
		if (pos == -1)
		{
			printf("���޴���,��������\n");
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
	printf("ɾ���ɹ�\n");
}

void searchcontact(const contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�����\n");
		return;
	}
	char name[MAX_NAME];
	while (1)
	{
		printf("������Ҫ���ҵ��˵�����:>");
		scanf("%s", name);
		int pos = fine(pc, name);
		if (pos == -1)
		{
			printf("���޴���,��������\n");
		}
		else
		{
			printf("%-15s\t%-5s\t%-10s\t%-20s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ��,�޷��޸�\n");
		return;
	}
	char name[MAX_NAME];
	while (1)
	{
		printf("������Ҫ�޸ĵ��˵�����:>");
		scanf("%s", name);
		int pos = fine(pc, name);
		if (pos == -1)
		{
			printf("ͨѶ¼���޴���,��������\n");
		}
		else
		{
			printf("����������:>");
			scanf("%s", pc->data[pos].name);
			printf("����������:>");
			scanf("%d", &(pc->data[pos].age));
			printf("�������Ա�:>");
			scanf("%s", pc->data[pos].sex);
			printf("������绰:>");
			scanf("%s", pc->data[pos].tele);
			printf("�������ַ:>");
			scanf("%s", pc->data[pos].addr);
			break;
		}
	}
	printf("�޸ĳɹ�\n");
}

int cmp(const void* e1, const void* e2)
{
	return strcmp(((contact*)e1)->data[0].name, ((contact*)e2)->data[1].name);
}

void sortcontact(contact* pc)
{
	if (pc->sz < 2)
	{
		printf("ͨѶ¼���ݲ���,�޷�����\n");
		return;
	}
	qsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp);
	printf("����ɹ�\n");
}