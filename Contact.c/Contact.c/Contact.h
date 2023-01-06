#pragma once


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAX_NAME  20
#define MAX_SEX   10
#define MAX_TELE  20
#define MAX_ADDR  30


#define MAX  1000

#define DEFAULT_SZ 3
#define INC_SZ 2


typedef struct peocon
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}peocon;


//静态通讯录
//typedef struct contact
//{
//	peocon data[MAX];
//	int sz;
//}contact;

//动态通讯录
typedef struct contact
{
	peocon* data;
	int sz;
	int capacity;
}contact;

//初始化通讯录
void Innitcon(contact* pc);

//添加联系人
void addcontact(contact* pc);

//打印通讯录
void printcontact(const contact* pc);

//删除联系人
void delcontact(contact* pc);

//查找联系人
void searchcontact(const contact* pc);

//修改联系人
void modifycontact(contact* pc);

//排序通讯录
void sortcontact(contact* pc);

//销毁通讯录
void destroycontact(contact* pc);

