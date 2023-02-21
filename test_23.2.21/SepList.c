#define _CRT_SECURE_NO_WARNINGS

#include "SepList.h"


void SepListinit(SepList* ps)
{
	ps->arr = (SLdatatype*)calloc(INIT_CAPACITY, sizeof(SLdatatype));
	assert(ps->arr);
	ps->sz = 0;
	ps->capacity = INIT_CAPACITY;

}

void SepListdestroy(SepList* ps)
{
	free(ps->arr);
	ps->arr = NULL;
	ps->sz = 0;
	ps->capacity = INIT_CAPACITY;
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
