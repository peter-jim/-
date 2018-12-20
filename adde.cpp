#include"stdafx.h"
#include"adde.h"
#include"employment.h"
#include<malloc.h>
#include<string.h>
#include"look.h"
#include"Windows.h"

void adde(struct Employment employment[5]) {
	
	int enter;
	int i = 0;
	printf("开始录入学生数据");

	

	for (i; i < 5; i++) {
		
		//employment[i] = (struct Employment*)malloc(sizeof(struct Employment)); //内存分配
		printf("请输入工号");

		scanf_s("%d", &enter);
		int j = 0;
		int flag = 0;

		for (j; j < 5; j++) {
			//printf("开始检测");
			if (enter == employment[j].number)
			{
				printf("该信息已录入请重新输入");
				printf("   请5秒后再次输入\n");
				Sleep(5000);
				printf("请重新输入工号");
				flag++;
				i--;
				break;
			}

		}

		if (flag==0)
		{
		employment[i].number = enter;
		printf("输入的工号为%.0f", employment[i].number);
		printf("请输入名字\n");
		getchar();
		gets_s(employment[i].name);
		printf("\n名字为%s\n", employment[i].name);

		printf("请输入学历");
		gets_s(employment[i].degree);
		printf("\n学历为%s", employment[i].degree);
		}
		
		/*
		
		在这儿添加
		
		*/
		
		printf("\n请选择是否继续录入数据  1.继续 2.退出 \n ");
		scanf_s("%d", &enter);
		if (enter != 1)
			   break;
	}
	

	printf("录入完毕\n");
	
}