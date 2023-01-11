#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

//���ļ��е���ϵ����Ϣ����
void download(contact* pc)
{
	FILE* pf = fopen("D:\\C\\c-code\\CONTACT\\CONTACT\\contact.txt", "r");  //��ֻ���ķ�ʽ���ļ�
	if (pf == NULL)  //�ж��ļ��Ƿ�򿪳ɹ�
	{
		perror("fopen");
		return;
	}
	
	peoinfo tmp = { 0 };
	while (fread(&tmp, sizeof(peoinfo), 1, pf))
	{
		inccapacity(pc);  //���ݺ���
		pc->data[pc->sz] = tmp;  //����ϵ����Ϣд�� data ��
		pc->sz++;  //��¼д����ϵ�˵�����
	}
	fclose(pf);  //�ر��ļ�
	pf = NULL;
}

//�����ļ��е���ϵ����Ϣ
void savecontact(contact* pc)
{
	FILE* pf = fopen("D:\\C\\c-code\\CONTACT\\CONTACT\\contact.txt", "w");  //��ֻд�ķ�ʽ���ļ�
	if (pf == NULL)  //�ж��ļ��Ƿ�򿪳ɹ�
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
		fwrite(pc->data + i, sizeof(peoinfo), 1, pf);  //���ļ���д��ͨѶ¼������
	}
	fclose(pf);  //����д��󣬹ر��ļ�
	pf = NULL;
}

//����ͨѶ¼
void destroycontact(contact* pc)
{
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;  //�����ظ�Ĭ��ֵ
	free(pc->data);  //�ͷ�֮ǰ���ٵ��ڴ�
	pc->data = NULL;  //ָ���ÿգ���ֹҰָ��ĳ���
}

//��̬��ʼ����ϵ��
void Innitcontact(contact* pc)
{
	pc->data = (peoinfo*)calloc(DEFAULT_SZ, sizeof(peoinfo));  //��̬�ڴ濪�٣�ʵ��ͨѶ¼�Ķ�̬
	if (pc->data == NULL)  //�ж��ڴ濪���Ƿ�ɹ�
	{
		perror("Innitcontact");
		return;
	}
	pc->sz = 0;  //��ʼ��ͨѶ¼ʵʱ������Ҳ�������±�
	pc->capacity = DEFAULT_SZ;  //��ʼ������
	download(pc);  //�����ļ�����ϵ�˵���Ϣ
}


//��ӡͨѶ¼
void printcontact(contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");  //��ӡ�ĸ�ʽ���Ը��ݸ���ϲ����
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
	    peoinfo* ptr = (peoinfo*)realloc(pc->data,(DEFAULT_SZ+INC_SZ)*sizeof(peoinfo));  //���� realloc �����ڴ���ٴζ�̬���٣�ʵ��ͨѶ¼������
		
		if(ptr == NULL)  //�ж��ڴ��Ƿ񿪱ٳɹ�
		{
			printf("����ʧ��\n");
			perror("inccapacity");
			return;
		}
		else
		{
			pc->data = ptr;   //�����ݺ��ͨѶ¼�׵�ַ����ԭ����ͨѶ¼
			pc->capacity += INC_SZ;  //��������
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
		if (strcmp(tmp, pc->data[i].name) == 0)  //��Ϊ�������ַ��������������ַ����ȽϺ���
		{
			return i;  //���ҳɹ��������±�
		}
	}
	return -1;  //ʧ���򷵻�-1
}

//�����ϵ��
void addcontact(contact* pc)
{
	int input = 0;
	do
	{
		
		printf("��1��������0����:>");  //���� do ... while �ṹʵ����ϵ�˵Ķ�����
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			inccapacity(pc);  //�ж������Ƿ������������������������
			printf("��ʼ���\n");  //��ϵ�˸�����Ϣ��¼��
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
			pc->sz++;  //��ӳɹ���ͨѶ¼ʵʱ��������1
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
	if (pc->sz == 0)  //�ж�ͨѶ¼��������
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	while (1)
	{
	again:
		printf("������Ҫɾ�����˵�����:>");
		scanf("%s", tmp);
		pos = find(tmp, pc);  //����Ҫɾ���˵��±�
		if (pos == -1)
		{
			printf("Ҫɾ�����˲�����,��������\n");
			goto again;
		}
		else
			break;
	}
	printf("��ʼɾ��\n");
	for (i = pos; i < pc->sz - 1; i++)  //�ӷ��ص��±� pos ��ʼ ,֮���ÿ��Ԫ����ǰ�ƶ�һλ
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;  //ɾ���ɹ���ͨѶ¼��ʵʱ������ȥ1
	printf("ɾ���ɹ�\n");
}

//������ϵ��
void searchcontact(contact* pc)
{
	char name[MAX_NAME];
	int pos = 0;
	if (pc->sz == 0)    //�ж�ͨѶ¼���Ƿ�������
	{
		printf("ͨѶ¼Ϊ�գ��޷���ѯ\n");
		return;
	}
	while (1)
	{
		again:
		printf("������Ҫ�����˵�����:>");
		scanf("%s", name);
		pos = find(name, pc);  //���� fing ���������������±�
		if (pos == -1)
		{
			printf("���޴��ˣ����²�ѯ\n");  //��ѯʧ�������
			goto again;
		}
		else
			break;
	}
	printf("��ѯ�ɹ�\n");
	printf("%-20s\t%-5s\t%-10s\t%-20s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");   //��ӡ����ϵ�˵���Ϣ
	printf("%-20s\t%-5d\t%-10s\t%-20s\t%-30s\n", pc->data[pos].name,
												 pc->data[pos].age,
												 pc->data[pos].sex,
												 pc->data[pos].tel,
												 pc->data[pos].addr);
	
}

//�޸���ϵ��
void modifycontact(contact* pc)
{
	if (pc->sz == 0)  //�ж�ͨѶ¼�Ƿ�������
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
		pos = find(name, pc);  //����Ҫ�޸ĵ���ϵ�˵��±�
		if (pos == -1)
		{
			printf("Ҫ�޸ĵ���ϵ�˲����ڣ���������\n");
			goto again;
		}
		else
			break;
	}
	printf("��ʼ�޸�\n");  //�޸���ϵ����Ϣ
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
		printf("ͨѶ¼���ݲ��㣬�޷�����\n");  //�ж��Ƿ�֧������
		return;
	}
	int i = 0, j = 0;
	sort S;  //�����Ĵ���
	S.sort= (peoinfo*)calloc(pc->capacity, sizeof(peoinfo));  //sort �ĳ�ʼ��
	if (S.sort == NULL) //�ж϶�̬�ڴ��Ƿ񿪱ٳɹ�
	{
		perror("sortcontact");
		return;
	}
	printf("��ʼ����\n");
	//qsort(pc, pc->sz, sizeof(peoinfo), cmp);
	for (i = 0; i < pc->sz - 1; i++)   //�����㷨
	{
		for (j = i + 1; j < pc->sz; j++)
		{
			if (strcmp(pc->data[i].name, pc->data[j].name) > 0)
			{
				S.sort[i] = pc->data[i];  //����Ԫ��
				pc->data[i] = pc->data[j];
				pc->data[j] = S.sort[i];
			}
		}
	}
	printf("����ɹ�\n");
	free(S.sort);  //����ɹ����ͷ������ٵ��ڴ�
	S.sort = NULL;  //��ָ���ÿգ���ֹʹ��Ұָ��
}