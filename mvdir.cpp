#include"stdafx.h"
#include"mvdir.h"
#include"employment.h"
#include<string>

void mvdir(struct Employment employment[5])
{
	float enter;
	int i = 0;
	printf("请输入你要删除的编号：");
	scanf_s("%f", &enter);
	for ( i = 0; i < 5; i++)
	{
		if (employment[i].number == enter)
		{
			printf("开始删除 %d 的个人信息\n", enter);
			employment[i].number = 0;
			strcpy_s(employment[i].name, "0");
			strcpy_s(employment[i].degree, "0");

			//
			//
			//
			printf("已删除");
		}
		
	}

}