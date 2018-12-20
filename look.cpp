#include"stdafx.h"
#include"employment.h"
#include <stdlib.h>
#include"look.h"
#include <windows.h>
void look(struct Employment employment[5]) {
	int i = 0;
	system("cls");    //清屏幕
	for (i = 0; i < 5; i++)
	{
		if (employment[i].number == 0)
			break;
		printf("输出的工号为：%.0f\t",employment[i].number);
		printf("名字：%s\t", employment[i].name);
		printf("学历：%s\n", employment[i].degree);


	}
	printf("5秒后返回");
	Sleep(5000);
}