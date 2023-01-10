#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

//���ļ��е���ϵ����Ϣ����
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

//�����ļ��е���ϵ����Ϣ
void savecontact(contact* pc)
{
	FILE* pf = fopen("D:\\C\\c-code\\CONTACT\\CONTACT\\contact.txt", "w");
	if (pf == NULL)
	{
		perror("savecontact");
		return;
	}
	int i = 0;
	/*fprintf(pf, "%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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

//����ͨѶ¼
void destroycontact(contact* pc)
{
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	free(pc->data);
	pc->data = NULL;
}

//��̬��ʼ����ϵ��
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


//��ӡͨѶ¼
void printcontact(contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-10s\t%-20s\t%-30s\n", pc->data[i].name,
													 pc->data[i].age,
													 pc->data[i].sex,
													 pc->data[i].tel,
													 pc->data[i].addr);
	}
}

//�Ƿ�����
void inccapacity(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		printf("ͨѶ¼����,��ʼ����\n");
	    peoinfo* ptr = (peoinfo*)realloc(pc->data,(DEFAULT_SZ+INC_SZ)*sizeof(peoinfo));
		
		if(ptr == NULL)
		{
			printf("����ʧ��\n");
			perror("inccapacity");
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

//������ϵ��
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

//�����ϵ��
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
			inccapacity(pc);
			printf("��ʼ���\n");
			printf("����������:>");
			scanf("%s", pc->data[pc->sz].name);
			printf("����������:>");
			scanf("%d", &(pc->data[pc->sz].age));
			printf("�������Ա�:>");
			scanf("%s", pc->data[pc->sz].sex);
			printf("������绰:>");
			scanf("%s", pc->data[pc->sz].tel);
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
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
}

//ɾ����ϵ��
void delcontact(contact* pc)
{
	char tmp[MAX_NAME];
	int pos = 0, i = 0;
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	while (1)
	{
	again:
		printf("������Ҫɾ�����˵�����:>");
		scanf("%s", tmp);
		pos = find(tmp, pc);
		if (pos == -1)
		{
			printf("Ҫɾ�����˲�����,��������\n");
			goto again;
		}
		else
			break;
	}
	printf("��ʼɾ��\n");
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}

//������ϵ��
void searchcontact(contact* pc)
{
	char name[MAX_NAME];
	int pos = 0;
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷���ѯ\n");
		return;
	}
	while (1)
	{
		again:
		printf("������Ҫ�����˵�����:>");
		scanf("%s", name);
		pos = find(name, pc);
		if (pos == -1)
		{
			printf("���޴��ˣ����²�ѯ\n");
			goto again;
		}
		else
			break;
	}
	printf("��ѯ�ɹ�\n");
	printf("%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-5d\t%-10s\t%-20s\t%-30s\n", pc->data[pos].name,
												 pc->data[pos].age,
												 pc->data[pos].sex,
												 pc->data[pos].tel,
												 pc->data[pos].addr);
	
}

//�޸���ϵ��
void modifycontact(contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷��޸�\n");
		return;
	}
	char name[MAX_NAME];
	int pos = 0;
	while (1)
	{
		again:
		printf("������Ҫ�޸ĵ���ϵ�˵�����:>");
		scanf("%s", name);
		pos = find(name, pc);
		if (pos == -1)
		{
			printf("Ҫ�޸ĵ���ϵ�˲����ڣ���������\n");
			goto again;
		}
		else
			break;
	}
	printf("��ʼ�޸�\n");
	printf("����������:>");
	scanf("%s", pc->data[pos].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pos].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pos].tel);
	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);
	printf("�޸ĳɹ�\n");
}

//int cmp(const void* e1, const void* e2)
//{
//	int ret = strcmp(((contact*)e1)->data[0].name, ((contact*)e2)->data[1].name);
//	return ret;
//}

//����ͨѶ¼
void sortcontact(contact* pc)
{
	if (pc->sz < 2)
	{
		printf("ͨѶ¼���ݲ��㣬�޷�����\n");
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
	printf("��ʼ����\n");
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
	printf("����ɹ�\n");
}