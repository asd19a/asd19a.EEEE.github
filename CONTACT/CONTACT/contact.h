#pragma once

//����ͷ�ļ��İ���
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//һЩ����ı�ʾ��С�ĺ�
#define MAX_NAME 20
#define MAX_SEX  10
#define MAX_TEL  20
#define MAX_ADDR 30

#define DEFAULT_SZ 3  //Ĭ��ͨѶ¼����
#define INC_SZ     2  //ÿ�����ݵĴ�С


//����ÿ����ϵ�˵���Ϣ
typedef struct peoinfo
{
	char name[MAX_NAME]; //����
	int age;  //����
	char sex[MAX_SEX];  //�Ա�
	char tel[MAX_TEL];  //�绰
	char addr[MAX_ADDR];  //��ַ
}peoinfo;


//�洢ÿ����ϵ��
typedef struct contact
{
	peoinfo* data;  //����ָ����������������̬�ڴ濪�٣�����ͨѶ¼���ݲ���
	int sz;     //ͨ���±��������
	int capacity;  // ��¼ͨѶ¼����
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

