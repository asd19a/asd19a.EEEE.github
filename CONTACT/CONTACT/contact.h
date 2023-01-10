#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX  10
#define MAX_TEL  20
#define MAX_ADDR 30

#define DEFAULT_SZ 3
#define INC_SZ     2


//定义每个联系人的信息
typedef struct peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
}peoinfo;


//存储每个联系人
typedef struct contact
{
	peoinfo* data;
	int sz;
	int capacity;
}contact;

typedef struct sort
{
	peoinfo* sort;
}sort;

//动态初始化通讯录
void Innitcontact(contact* pc);

//打印通讯录
void printcontact(contact* pc);

//是否增容
void inccapacity(contact* pc);


//读入文件中的联系人信息
void download(contact* pc);

//保存文件中的联系人信息
void savecontact(contact* pc);

//销毁通讯录
void destroycontact(contact* pc);

//添加联系人
void addcontact(contact* pc);

//删除联系人
void delcontact(contact* pc);

//查找联系人
void searchcontact(contact* pc);

//修改联系人
void modifycontact(contact* pc);

//排序通讯录
void sortcontact(contact* pc);

