#include "stdafx.h"
#include"log.h"
#include<stdlib.h>  //exit头文件
#include <windows.h> 
#include"choice.h"
#include"employment.h"

void log(struct Employment employment[5]) {
	printf("输入1进入系统，其他退出系统\n");
	int enter;
    scanf_s("%d", &enter);
	if (enter == 1)
	{
		Sleep(1000);
		printf("进入职工管理系统");
		choice(employment);
	}
	else
	{
		printf("退出职工管理系统");
		printf("5秒后退出");
		Sleep(5000);
		exit(-1);
	}

}