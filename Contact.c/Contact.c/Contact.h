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


//��̬ͨѶ¼
//typedef struct contact
//{
//	peocon data[MAX];
//	int sz;
//}contact;

//��̬ͨѶ¼
typedef struct contact
{
	peocon* data;
	int sz;
	int capacity;
}contact;

//��ʼ��ͨѶ¼
void Innitcon(contact* pc);

//�����ϵ��
void addcontact(contact* pc);

//��ӡͨѶ¼
void printcontact(const contact* pc);

//ɾ����ϵ��
void delcontact(contact* pc);

//������ϵ��
void searchcontact(const contact* pc);

//�޸���ϵ��
void modifycontact(contact* pc);

//����ͨѶ¼
void sortcontact(contact* pc);

//����ͨѶ¼
void destroycontact(contact* pc);

