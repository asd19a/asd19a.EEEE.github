#define _CRT_SECURE_NO_WARNINGS


#include "SepList.h"

void SepListinit(SepList* ps)
{
	ps->sz = 0;
	ps->capacity = 5;
	ps->arr = (datatype*)calloc(ps->capacity , sizeof(datatype));
	if (ps->arr == NULL)
	{
		perror("SepListinit  malloc");
		return;
	}
}

void expcapacity(SepList* ps)
{
	if (ps->sz == ps->capacity)
	{
		datatype* ptr = NULL;
		ptr = (datatype*)realloc(ps->arr, 2 * ps->capacity * sizeof(datatype));
		if (ptr != NULL)
		{
			ps->arr = ptr;
			ps->capacity = 2 * ps->capacity;
		}

	}
}

void printSepList(SepList* ps)
{
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		printf("%d  ", ps->arr[i]);
	}
}

void SepListpushback(SepList* ps, datatype x)
{
	expcapacity(ps);
	ps->arr[ps->sz] = x;
	ps->sz++;
}

void SepListpushfront(SepList* ps, datatype x)
{
	expcapacity(ps);
	int end = ps->sz - 1;
	for (; end >= 0; end--)
	{
		ps->arr[end + 1] = ps->arr[end];
	}
	ps->arr[0] = x;
	ps->sz++;
}