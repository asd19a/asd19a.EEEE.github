#define _CRT_SECURE_NO_WARNINGS

//ͷ�ļ��İ���
#include "contact.h"


//�˵�
void menu()
{
	printf("*****************************************************************\n");
	printf("**********          1.add                 2.del        **********\n");
	printf("**********          3.search              4.modify     **********\n");
	printf("**********          5.see                 6.sort       **********\n");
	printf("**********                    0.exit                   **********\n");
	printf("*****************************************************************\n");

	
}
//����ö�ٱ���ʹ���������˼������
enum option
{
	EXIT, //Ĭ�ϴ�0��ʼ
	ADD,  //1
	DEL,  //2
	SEARCH,  //3
	MODIFY,  //4
	SEE,  //5
	SORT  //6
};

int main()
{
	int input = 0;
	contact con;   //ͨѶ¼��������
	//��ʼ����ϵ�����飬�������ļ��ж�ȡ��ϵ����Ϣ
	Innitcontact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			addcontact(&con);  //���
			break;
		case DEL:
			delcontact(&con);  //ɾ��
			break;
		case SEARCH:
			searchcontact(&con);  //����
			break;
		case MODIFY:
			modifycontact(&con);  //�޸�
			break;
		case SEE:
			printcontact(&con);  //��ӡͨѶ¼
			break;
		case SORT:
			sortcontact(&con);  //����
			break;
		case EXIT:
			savecontact(&con);  //����ͨѶ¼������ϵ����Ϣд���ļ���
			destroycontact(&con);  //����ͨѶ¼
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}