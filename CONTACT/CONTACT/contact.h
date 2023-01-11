#pragma once

//所需头文件的包含
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//一些定义的表示大小的宏
#define MAX_NAME 20
#define MAX_SEX  10
#define MAX_TEL  20
#define MAX_ADDR 30

#define DEFAULT_SZ 3  //默认通讯录容量
#define INC_SZ     2  //每次增容的大小


//定义每个联系人的信息
typedef struct peoinfo
{
	char name[MAX_NAME]; //姓名
	int age;  //年龄
	char sex[MAX_SEX];  //性别
	char tel[MAX_TEL];  //电话
	char addr[MAX_ADDR];  //地址
}peoinfo;


//存储每个联系人
typedef struct contact
{
	peoinfo* data;  //定义指针变量，方便后续动态内存开辟，进行通讯录扩容操作
	int sz;     //通过下标访问数组
	int capacity;  // 记录通讯录容量
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

