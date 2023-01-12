#define _CRT_SECURE_NO_WARNINGS

#include "���͘����ݤι���.h"


void iscapacity(save* ph)
{
	if (ph->sz1 == ph->capacity1)
	{
		printf("������󤬤��äѤ��ˤʤꡢ�������_ʼ���ޤ���\n");
		roominfor* ptr1 = (roominfor*)realloc(ph->dataroom, (DEFAULT_SZ + INC_SZ) * sizeof(roominfor));
		if (!ptr1)
		{
			perror("iscapacity");
			return;
		}
		ph->capacity1 += INC_SZ;
		ph->dataroom = ptr1;
		printf("���������˳ɹ����ޤ���\n");
	}
	if (ph->sz2 == ph->capacity2)
	{
		printf("�����󤬜����ˤʤꡢ�������_ʼ����ޤ���\n");
		in_infor* ptr2 = (in_infor*)realloc(ph->datain, (DEFAULT_SZ + INC_SZ) * sizeof(in_infor));
		if (!ptr2)
		{
			perror("download");
			return;
		}
		ph->capacity2 += INC_SZ;
		ph->datain = ptr2;
		printf("���������˳ɹ����ޤ���\n");
	}
	return;

}

void download(save* ph)
{
	FILE* pfroom = fopen("room.txt", "r");
	if (pfroom == NULL)
	{
		perror("download");
		return;
	}
	FILE* pfin = fopen("in.txt", "r");
	if (pfin == NULL)
	{
		fclose(pfroom);
		pfroom = NULL;
		return;
	}
	roominfor tmp1;
	while (fread(&tmp1, sizeof(roominfor), 1, pfroom))
	{
		iscapacity(ph);
		ph->dataroom[ph->sz1] = tmp1;
		ph->sz1++;
	}
	in_infor tmp2;
	while (fread(&tmp2, sizeof(in_infor), 1, pfin))
	{
		iscapacity(ph);
		ph->datain[ph->sz2] = tmp2;
		ph->sz2++;
	}
	fclose(pfroom);
	pfroom = NULL;
	fclose(pfin);
	pfin = NULL;
}

void print(save* ph)
{
	printf("%-20s\t%-20s\t%-10s\t%-10s\n", "���ݷ���", "�Ԓ����", "����", "���Ʃ`����");
	int i = 0;
	for (i = 0; i < ph->sz1; i++)
	{
		printf("%-20s\t%-20s\t%-10d\t%-10s\n", ph->dataroom[i].roomnum,
											   ph->dataroom[i].tel,
											   ph->dataroom[i].price,
											   ph->dataroom[i].state);
	}

}

void print2(save* ph)
{
	printf("%-20s\t%-20s\t%-10s\t%-10s%-10s\t%-10s\n", "���ݷ���", "ID���`��", "�����å��r�g", "�g��", "�����å������ȕr�g", "������");
	int i = 0;
	for (i = 0; i < ph->sz2; i++)
	{
		printf("%-20s\t%-20s\t%-10s\t%-10s%-10s\t%-10s\n", ph->datain[i].room_num,
														   ph->datain[i].idcard,
														   ph->datain[i].intime,
														   ph->datain[i]._price,
														   ph->datain[i].outtime,
														   ph->datain[i].cost);
	}
}

void Init(save* ph)
{
	ph->datain = (roominfor*)calloc(DEFAULT_SZ, sizeof(roominfor));
	ph->dataroom = (in_infor*)calloc(DEFAULT_SZ, sizeof(in_infor));
	if (ph->datain == NULL || ph->dataroom == NULL)
	{
		perror("Init");
		return;
	}
	ph->capacity1 = DEFAULT_SZ;
	ph->capacity2 = DEFAULT_SZ;
	ph->sz1 = 0;
	ph->sz2 = 0;
	download(ph);
}



void addroom(save* ph)
{
	iscapacity(ph);
	printf("׷�Ӥ��_ʼ\n");
	printf("���ݷ��Ť��������Ƥ���������");
	scanf("%s", ph->dataroom[ph->sz1].roomnum);
	printf("�Ԓ���Ť��������Ƥ���������");
	scanf("%s", ph->dataroom[ph->sz1].tel);
	printf("���Τ��������Ƥ���������");
	scanf("%d", &(ph->dataroom[ph->sz1].price));
	printf("���Ʃ`�������������Ƥ���������");
	scanf("%s", ph->dataroom[ph->sz1].state);
	ph->sz1++;
	printf("׷�ӳɹ�\n");
}


int find(save* ph,char *num)
{
	int i = 0;
	for (i = 0; i < ph->sz1; i++)
	{
		if (strcmp(num, ph->dataroom[i].roomnum) == 0)
		{
			return i;
		}
	}
	return -1;
}

void delroom(save* ph)
{
	if (ph->sz1 == 0)
	{
		printf("�ǩ`��������ޤ��������Ǥ��ޤ���\n");
		return;
	}
	char num[MAX_NUM];
	int pos = 0;
	while (1)
	{
		again:
		printf("�������벿�ݷ��Ť��������Ƥ���������");
		scanf("%s", num);
		pos = find(ph,num);
		if (pos == -1)
		{
			printf("�������벿�ݷ��Ť�����ޤ������������Ƥ�������\n");
			goto again;
		}
		else
			break;
	}
	printf("�������_ʼ���Ƥ��ޤ�\n");
	int i = 0;
	for (i = pos; i < ph->sz1 - 1; i++)
	{
		ph->dataroom[i] = ph->dataroom[i + 1];
	}
	ph->sz1--;
	printf("�����ɹ�\n");
}


void searchroom(save* ph)
{
	if (ph->sz1 == 0)
	{
		printf("�ǩ`��������ޤ��󡢗����Ǥ��ޤ�\n");
		return;
	}
	char num[MAX_NUM];
	printf("�������벿�ݷ��Ť��������Ƥ���������");
	scanf("%s", num);
	int pos = find(ph, num);
	if (pos == -1)
	{
		printf("���β��ݷ��Ť��������Ǥ���ޤ���\n");
		return;
	}
	else
	{
		printf("�����ɹ�\n");
		printf("%-20s\t%-20s\t%-10s\t%-10s\n", "���ݷ���", "�Ԓ����", "����", "���Ʃ`����");
		printf("%-20s\t%-20s\t%-10d\t%-10s\n", ph->dataroom[pos].roomnum,
											   ph->dataroom[pos].tel,
											   ph->dataroom[pos].price,
											   ph->dataroom[pos].state);

	}
}


void check(save* ph)
{
	printf("�����å���ʼ���Ȥ���Ǥ�\n");
	printf("���ݷ��Ť��������Ƥ���������");
	scanf("%s", ph->datain[ph->sz2].room_num);
	printf("ID���`�Ȥ��������Ƥ���������");
	scanf("%s", ph->datain[ph->sz2].idcard);
	printf("�����å�����r�g���������Ƥ���������");
	scanf("%s", ph->datain[ph->sz2].intime);
	printf("���Τ��������Ƥ���������");
	scanf("%d", &(ph->datain[ph->sz2]._price));
	printf("�����å������ȕr�g���������Ƥ���������");
	scanf("%s", ph->datain[ph->sz2].outtime);
	printf("�����Ȥ��������Ƥ���������");
	scanf("%d", &(ph->datain[ph->sz2].cost));
	ph->sz2++;
	printf("�����å��ɹ�\n");
	return;
}


void checkout(save* ph)
{
	if (ph->sz2 == 0)
	{
		printf("�ǩ`��������ޤ��󡢥����å������Ȥ��Ǥ��ޤ�\n");
		return;
	}
	char num[MAX_NUM];
	printf("�����å������Ȥ��벿�ݷ��Ť��������Ƥ���������");
	scanf("%s", num);
	int pos = find(ph, num);
	if (pos == -1)
	{
		printf("���Υǩ`���������å����Ǥ���ޤ���\n");
		return;
	}
	else
	{
		int i = 0;
		for (i = pos; i < ph->sz2 - 1; i++)
		{
			ph->datain[i] = ph->datain[i + 1];
		}
		ph->sz2--;
		printf("�����å������ȳɹ�\n");
		return;
	}
}

void Saveinfor(save* ph)
{
	FILE* pfroom = fopen("room.txt", "w");
	if (pfroom == NULL)
	{
		perror("Saveinfor");
		return;
	}
	FILE* pfin = fopen("in.txt", "w");
	if (pfin == NULL)
	{
		fclose(pfroom);
		pfroom = NULL;
		perror("Saveinfor");
		return;
	}
	roominfor tmp1;
	int i = 0;
	for (i = 0; i < ph->sz1; i++)
	{
		fwrite(ph->dataroom + i, sizeof(roominfor), 1, pfroom);
	}
	for (i = 0; i < ph->sz2; i++)
	{
		fwrite(ph->datain + i, sizeof(in_infor), 1, pfin);
	}
	fclose(pfroom);
	pfroom = NULL;
	fclose(pfin);
	pfin = NULL;
}

void destroy(save* ph)
{
	free(ph->dataroom);
	ph->dataroom = NULL;
	free(ph->datain);
	ph->datain = NULL;
	ph->sz1 = 0;
	ph->sz2 = 0;
	ph->capacity1 = DEFAULT_SZ;
	ph->capacity2 = DEFAULT_SZ;

}