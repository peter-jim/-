#include"stdafx.h"
#include"change.h"
#include"employment.h"
#include<Windows.h>
void change(struct Employment employment[5])
{
	float enter;
	int i = 0;
	printf("请输入你要修改的编号：");
	scanf_s("%f", &enter);
	for (i = 0; i < 5; i++)
	{
		if (employment[i].number == enter)
		{
			printf("请输入你要修改的内容1.工号 2.名字 3.学历");
			int a;
			scanf_s("%d", &a);
			printf("%d",&a);
			switch (a)
			{
			case 1:
				printf("请输入要改的工号");
				scanf_s("%f", &employment[i].number);
				printf("修改成功  5秒后返回");
				break;
			case 2:
				printf("请输入要改的名字");
				getchar();
				gets_s(employment[i].name);
				printf("修改成功  5秒后返回");
				break;

			case 3:
				printf("请输入要改的学历");
				getchar();
				gets_s(employment[i].degree);
				printf("修改成功  5秒后返回");
				break;
			default:
				break;
			}
			
		}

	}
	Sleep(5000);
}