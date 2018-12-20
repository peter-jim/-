#include"find.h"
#include"stdafx.h"
#include"employment.h"
#include<Windows.h>

void find(struct Employment employment[5]) 
{
	int i = 0;
	float enter;
	printf("请输入要查找的编号");
	scanf_s("%f", &enter);
	for ( i = 0; i < 5; i++)
	{
		if (employment[i].number == enter)
		{
			printf("查找成功他的个人信息为%.0f\t %s \t %s\n", employment[i].number,employment[i].name,employment[i].degree);
			break;
		}
		if (i==4)
		{
			printf("没有此人\n");
		}
	}
	printf("5秒后返回");
	Sleep(5000);

}