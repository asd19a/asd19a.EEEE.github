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


//����ÿ����ϵ�˵���Ϣ
typedef struct peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
}peoinfo;


//�洢ÿ����ϵ��
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

//��̬��ʼ��ͨѶ¼
void Innitcontact(contact* pc);

//��ӡͨѶ¼
void printcontact(contact* pc);

//�Ƿ�����
void inccapacity(contact* pc);


//�����ļ��е���ϵ����Ϣ
void download(contact* pc);

//�����ļ��е���ϵ����Ϣ
void savecontact(contact* pc);

//����ͨѶ¼
void destroycontact(contact* pc);

//�����ϵ��
void addcontact(contact* pc);

//ɾ����ϵ��
void delcontact(contact* pc);

//������ϵ��
void searchcontact(contact* pc);

//�޸���ϵ��
void modifycontact(contact* pc);

//����ͨѶ¼
void sortcontact(contact* pc);

