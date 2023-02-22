#define _CRT_SECURE_NO_WARNINGS

#include "SepList.h"


void download(SepList* ps)
{
	FILE* pf = fopen("SepList.txt", "r");
	assert(pf);
	while (fscanf(pf, "%d", &ps->arr[ps->sz]) != EOF)
	{
		ps->sz++;
		expcapacity(ps);
	}
	fclose(pf);
	pf = NULL;
}

void SepListinit(SepList* ps)
{
	ps->arr = (SLdatatype*)calloc(INIT_CAPACITY, sizeof(SLdatatype));
	assert(ps->arr);
	ps->sz = 0;
	ps->capacity = INIT_CAPACITY;
	download(ps);
}

void SepListdestroy(SepList* ps)
{
	int i = 0;
	FILE* pf = fopen("SepList.txt", "w");
	assert(pf);
	for (i = 0; i < ps->sz; i++)
	{
		fprintf(pf, "%d", ps->arr[i]);
	}
	free(ps->arr);
	ps->arr = NULL;
	ps->sz = 0;
	ps->capacity = INIT_CAPACITY;
	fclose(pf);
	pf = NULL;
}

void expcapacity(SepList* ps)
{
	if (ps->sz == ps->capacity)
	{
		SLdatatype* tmp = (SLdatatype*)realloc(ps->arr, sizeof(SLdatatype) * 2 * ps->capacity);
		assert(tmp);
		ps->arr = tmp;
		ps->capacity = 2 * ps->capacity;
	}
}

void SepListprint(SepList* ps)
{
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		printf("%d  ", ps->arr[i]);
	}
	printf("\n");
}

void SepListpushback(SepList* ps, SLdatatype x)
{
	expcapacity(ps);
	ps->arr[ps->sz] = x;
	ps->sz++;
}

void SepListpushfront(SepList* ps, SLdatatype x)
{
	int end = ps->sz - 1;
	for (; end >= 0; end--)
	{
		ps->arr[end + 1] = ps->arr[end];
	}
	ps->arr[0] = x;
	ps->sz++;
}

void SepListpopback(SepList* ps)
{
	assert(ps->sz > 0);
	ps->sz--;
}

void SepListpopfront(SepList* ps)
{
	assert(ps->sz > 0);
	int begain = 0;
	for (; begain < ps->sz-1; begain++)
	{
		ps->arr[begain] = ps->arr[begain + 1];
	}
	ps->sz--;
}

//#define 

void SepListsearch(SepList* ps)
{
	if (ps->sz == 0)
	{
		printf("无数据可供删除\n");
		return;
	}
	SLdatatype x = 0;
	int count = 0;
	SLdatatype* tmp = (SLdatatype*)calloc(ps->sz, sizeof(SLdatatype));
	assert(tmp);
	printf("请输入要查询的数据:>");
	scanf("%d", &x);
	int i = 0,flag = 0;
	for (i = 0; i < ps->sz; i++)
	{
		if (ps->arr[i] == x)
		{
			flag = 1;
			tmp[count++] = i;
		}
	}
	if (flag == 0)
	{
		printf("无此数据\n");
	}
	else
	{
		printf("查到了，下标是:> ");
		for (i = 0; i < count; i++)
		{
			printf("%d  ", tmp[i]);
		}
	}
	free(tmp);
	tmp = NULL;
	printf("\n");
}

void SepListmodify(SepList* ps)
{
	if (ps->sz == 0)
	{
		printf("无数据可供修改\n");
		return;
	}
	SLdatatype x = 0;
again:
	printf("请输入要修改的数据:>");
	scanf("%d", &x);
	int i = 0, pos = 0;
	int flag = 0;
	for (i = 0; i < ps->sz; i++)
	{
		if (ps->arr[i] == x)
		{
			flag = 1;
			pos = i;
			break;
		}
	}
	if (flag == 0)
	{
		printf("要修改的数据不存在,重新输入\n");
		goto again;
	}
	else
	{
		printf("开始修改:>");
		scanf("%d", &ps->arr[pos]);
		printf("修改成功\n");
	}
}