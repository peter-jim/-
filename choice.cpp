#include"choice.h"
#include"stdafx.h"
#include<malloc.h>
#include"log.h"
#include"choice.h"
#include"adde.h"
#include"look.h"
#include<iostream>
#include<malloc.h>
#include"find.h"
#include"mvdir.h"
#include"change.h"
#include"employment.h"
void choice(struct Employment employment[5]) {

	printf("         请选择你要执行操作         \n");
	printf("                    1    录入              \n");
	printf("                    2    删除           \n");
	printf("                    3    修改           \n");
	printf("                    4    查找         \n");
	printf("                    5    查看所有人         \n");
	int enter;

	
	printf("你选择的操作是\n");
	scanf_s("%d", &enter);
	printf("你选的是 %d 号操作\n", enter);

	/*
	int i = 0;
	
	for (i; i < 5; i++)
	{
		employment[i].number = 0;
		strcpy_s(employment[i].name, "0");
		strcpy_s(employment[i].degree, "0");
	}
	*/

	switch (enter)
	{
	case 1:
		adde(employment);
		break;
	case 2:
		mvdir(employment);
		break;
	case 3:
		change(employment);
		break;
	case 4:
		find(employment);
		break;
	case 5:
		printf("开始执行5号操作");
		look(employment);
		break;
	default:
		printf("输入错误，你重新输入");
	}

	
	
}