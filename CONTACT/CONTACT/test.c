#define _CRT_SECURE_NO_WARNINGS

//头文件的包含
#include "contact.h"


//菜单
void menu()
{
	printf("*****************************************************************\n");
	printf("**********          1.add                 2.del        **********\n");
	printf("**********          3.search              4.modify     **********\n");
	printf("**********          5.see                 6.sort       **********\n");
	printf("**********                    0.exit                   **********\n");
	printf("*****************************************************************\n");

	
}
//利用枚举变量使代码表达的意思更清晰
enum option
{
	EXIT, //默认从0开始
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
	contact con;   //通讯录变量创建
	//初始化联系人数组，包含从文件中读取联系人信息
	Innitcontact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			addcontact(&con);  //添加
			break;
		case DEL:
			delcontact(&con);  //删除
			break;
		case SEARCH:
			searchcontact(&con);  //查找
			break;
		case MODIFY:
			modifycontact(&con);  //修改
			break;
		case SEE:
			printcontact(&con);  //打印通讯录
			break;
		case SORT:
			sortcontact(&con);  //排序
			break;
		case EXIT:
			savecontact(&con);  //保存通讯录，将联系人信息写入文件中
			destroycontact(&con);  //销毁通讯录
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}