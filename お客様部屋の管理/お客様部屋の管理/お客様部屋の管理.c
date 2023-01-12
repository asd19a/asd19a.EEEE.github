#define _CRT_SECURE_NO_WARNINGS

#include "お客様部屋の管理.h"


void iscapacity(save* ph)
{
	if (ph->sz1 == ph->capacity1)
	{
		printf("客室情報がいっぱいになり、拡張を開始しました\n");
		roominfor* ptr1 = (roominfor*)realloc(ph->dataroom, (DEFAULT_SZ + INC_SZ) * sizeof(roominfor));
		if (!ptr1)
		{
			perror("iscapacity");
			return;
		}
		ph->capacity1 += INC_SZ;
		ph->dataroom = ptr1;
		printf("容量拡張に成功しました\n");
	}
	if (ph->sz2 == ph->capacity2)
	{
		printf("入居情報が満杯になり、拡張が開始されました\n");
		in_infor* ptr2 = (in_infor*)realloc(ph->datain, (DEFAULT_SZ + INC_SZ) * sizeof(in_infor));
		if (!ptr2)
		{
			perror("download");
			return;
		}
		ph->capacity2 += INC_SZ;
		ph->datain = ptr2;
		printf("容量拡張に成功しました\n");
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
	printf("%-20s\t%-20s\t%-10s\t%-10s\n", "部屋番号", "電話番号", "値段", "ステータス");
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
	printf("%-20s\t%-20s\t%-10s\t%-10s%-10s\t%-10s\n", "部屋番号", "IDカート", "チェック時間", "単価", "チェックアウト時間", "コスト");
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
	printf("追加を開始\n");
	printf("部屋番号を入力してください：");
	scanf("%s", ph->dataroom[ph->sz1].roomnum);
	printf("電話番号を入力してください：");
	scanf("%s", ph->dataroom[ph->sz1].tel);
	printf("値段を入力してください：");
	scanf("%d", &(ph->dataroom[ph->sz1].price));
	printf("ステータスを入力してください：");
	scanf("%s", ph->dataroom[ph->sz1].state);
	ph->sz1++;
	printf("追加成功\n");
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
		printf("データがありません、削除できません\n");
		return;
	}
	char num[MAX_NUM];
	int pos = 0;
	while (1)
	{
		again:
		printf("削除する部屋番号を入力してください：");
		scanf("%s", num);
		pos = find(ph,num);
		if (pos == -1)
		{
			printf("削除する部屋番号がありません、再入力してください\n");
			goto again;
		}
		else
			break;
	}
	printf("削除を開始しています\n");
	int i = 0;
	for (i = pos; i < ph->sz1 - 1; i++)
	{
		ph->dataroom[i] = ph->dataroom[i + 1];
	}
	ph->sz1--;
	printf("削除成功\n");
}


void searchroom(save* ph)
{
	if (ph->sz1 == 0)
	{
		printf("データがありません、検索できませ\n");
		return;
	}
	char num[MAX_NUM];
	printf("検索する部屋番号を入力してください：");
	scanf("%s", num);
	int pos = find(ph, num);
	if (pos == -1)
	{
		printf("この部屋番号が客室情報でありません\n");
		return;
	}
	else
	{
		printf("検索成功\n");
		printf("%-20s\t%-20s\t%-10s\t%-10s\n", "部屋番号", "電話番号", "値段", "ステータス");
		printf("%-20s\t%-20s\t%-10d\t%-10s\n", ph->dataroom[pos].roomnum,
											   ph->dataroom[pos].tel,
											   ph->dataroom[pos].price,
											   ph->dataroom[pos].state);

	}
}


void check(save* ph)
{
	printf("チェックを始めるところです\n");
	printf("部屋番号を入力してください：");
	scanf("%s", ph->datain[ph->sz2].room_num);
	printf("IDカートを入力してください：");
	scanf("%s", ph->datain[ph->sz2].idcard);
	printf("チェックイン時間を入力してください：");
	scanf("%s", ph->datain[ph->sz2].intime);
	printf("値段を入力してください：");
	scanf("%d", &(ph->datain[ph->sz2]._price));
	printf("チェックアウト時間を入力してください：");
	scanf("%s", ph->datain[ph->sz2].outtime);
	printf("コストを入力してください：");
	scanf("%d", &(ph->datain[ph->sz2].cost));
	ph->sz2++;
	printf("チェック成功\n");
	return;
}


void checkout(save* ph)
{
	if (ph->sz2 == 0)
	{
		printf("データがありません、チェックアウトができませ\n");
		return;
	}
	char num[MAX_NUM];
	printf("チェックアウトする部屋番号を入力してください：");
	scanf("%s", num);
	int pos = find(ph, num);
	if (pos == -1)
	{
		printf("このデータがチェック情報でありません\n");
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
		printf("チェックアウト成功\n");
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