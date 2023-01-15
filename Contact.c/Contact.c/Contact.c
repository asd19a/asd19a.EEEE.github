#define _CRT_SECURE_NO_WARNINGS

#include "Contact.h"

//��̬��ʼ��
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

//��̬��ʼ��
void Innition(contact* pc)
{
	pc->sz = 0;
	pc->data = (peocon*)calloc(DEFAULT_SZ, sizeof(peocon));
	pc->capacity = DEFAULT_SZ;
	download(pc);
}

//��̬�����ϵ��
//void addcontact(contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	
//		printf("����������:>");
//		scanf("%s", pc->data[pc->sz].name);
//		printf("����������:>");
//		scanf("%d", &(pc->data[pc->sz].age));
//		printf("�������Ա�:>");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("������绰:>");
//		scanf("%s", pc->data[pc->sz].tele);
//		printf("�������ַ:>");
//		scanf("%s", pc->data[pc->sz].addr);
//	
//	pc->sz++;
//	printf("��ӳɹ�\n");
//}


void checkcapacity(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		printf("ͨѶ¼��������ʼ����\n");
		peocon* ptr = (peocon*)realloc(pc->data, (DEFAULT_SZ + INC_SZ) * sizeof(peocon));
		if (ptr == NULL)
		{
			printf("����ʧ��\n");
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
		}
	}
}

//��̬�����ϵ��
void addcontact(contact* pc)
{
	int input = 0;
	do
	{
		printf("��1��������0����:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			checkcapacity(pc);
			printf("��ʼ���\n");
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
			break;
		case 0:
			printf("����\n");
			return;
			break;
		default:
			printf("���������������\n");
			break;

		}
	} while (input);
}


//��ӡͨѶ¼
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

//Ѱ����ϵ��
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


//ɾ����ϵ��
void delcontact(contact* pc)
{
	int i = 0;
	char name[MAX_NAME];
	int input = 0;
	do
	{
		printf("��1��������0����:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			if (pc->sz == 0)
			{
				printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
				return;
			}
			while (1)
			{
				again:
				printf("������Ҫɾ�����˵�����:>");
				scanf("%s", name);
				int pos = fine(pc, name);
				if (pos == -1)
				{
					printf("���޴���,��0��������������:>");
					int ret = 0;
					scanf("%d", &ret);
					if (ret == 0)
						return;
					else
						goto again;

				}
				else
				{
					printf("��ʼɾ��\n");
					for (i = pos; i < pc->sz - 1; i++)
					{
						pc->data[i] = pc->data[i + 1];
					}
					break;
				}
			}
			pc->sz--;
			printf("ɾ���ɹ�\n");
			break;
		case 0:
			printf("����\n");
			return;
			break;
		default :
			printf("���������������\n");
			break;

		}
	} while (input);
}


//������ϵ��
void searchcontact(const contact* pc)
{
	int input = 0;
	do
	{
		printf("��1��������0����:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			if (pc->sz == 0)
			{
				printf("ͨѶ¼Ϊ�գ��޷�����\n");
				return;
			}
			char name[MAX_NAME];
			while (1)
			{
				again:
				printf("������Ҫ���ҵ��˵�����:>");
				scanf("%s", name);
				int pos = fine(pc, name);
				printf("��ʼ����\n");
				if (pos == -1)
				{
					printf("���޴���,��0����,��������:>");
					int ret = 0;
					scanf("%d", &ret);
					if (ret == 0)
						return;
					else
						goto again;

				}
				else
				{
					printf("���ҳɹ�\n");
					printf("%-15s\t%-5s\t%-10s\t%-20s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
			printf("����\n");
			return;
			break;
		default:
			printf("���������������\n");
			break;
		}
		

	} while (input);
	
}


//�޸�ͨѶ¼
void modifycontact(contact* pc)
{
	int input = 0;
	do
	{
		printf("��1��������0����:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			if (pc->sz == 0)
			{
				printf("ͨѶ¼Ϊ��,�޷��޸�\n");
				return;
			}
			char name[MAX_NAME];
			while (1)
			{
				again:
				printf("������Ҫ�޸ĵ��˵�����:>");
				scanf("%s", name);
				int pos = fine(pc, name);
				printf("��ʼ�޸�\n");
				if (pos == -1)
				{
					printf("ͨѶ¼���޴���,��0��������������:>");
					int ret = 0;
					scanf("%d", &ret);
					if (ret == 0)
						return;
					else
						goto again;

					
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
			break;
		case 0:
			printf("����\n");
			return;
			break;
		default:
			printf("���������������\n");
			break;

		}
	} while (input);
}

int cmp(const void* e1, const void* e2)
{
	return strcmp(((contact*)e1)->data[0].name, ((contact*)e2)->data[1].name);
}


//����ͨѶ¼
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

//����ͨѶ¼
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