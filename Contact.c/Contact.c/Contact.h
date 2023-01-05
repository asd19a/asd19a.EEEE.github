#pragma once


#include <stdio.h>
#include <string.h>


#define MAX_NAME  20
#define MAX_SEX   10
#define MAX_TELE  20
#define MAX_ADDR  30


#define MAX  1000


typedef struct peocon
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}peocon;

typedef struct contact
{
	peocon data[MAX];
	int sz;
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

