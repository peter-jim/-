#include"stdafx.h"
#include"employment.h"
#include <stdlib.h>
#include"look.h"
#include <windows.h>
void look(struct Employment employment[5]) {
	int i = 0;
	system("cls");    //����Ļ
	for (i = 0; i < 5; i++)
	{
		if (employment[i].number == 0)
			break;
		printf("����Ĺ���Ϊ��%.0f\t",employment[i].number);
		printf("���֣�%s\t", employment[i].name);
		printf("ѧ����%s\n", employment[i].degree);


	}
	printf("5��󷵻�");
	Sleep(5000);
}