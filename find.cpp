#include"find.h"
#include"stdafx.h"
#include"employment.h"
#include<Windows.h>

void find(struct Employment employment[5]) 
{
	int i = 0;
	float enter;
	printf("������Ҫ���ҵı��");
	scanf_s("%f", &enter);
	for ( i = 0; i < 5; i++)
	{
		if (employment[i].number == enter)
		{
			printf("���ҳɹ����ĸ�����ϢΪ%.0f\t %s \t %s\n", employment[i].number,employment[i].name,employment[i].degree);
			break;
		}
		if (i==4)
		{
			printf("û�д���\n");
		}
	}
	printf("5��󷵻�");
	Sleep(5000);

}