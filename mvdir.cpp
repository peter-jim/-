#include"stdafx.h"
#include"mvdir.h"
#include"employment.h"
#include<string>

void mvdir(struct Employment employment[5])
{
	float enter;
	int i = 0;
	printf("��������Ҫɾ���ı�ţ�");
	scanf_s("%f", &enter);
	for ( i = 0; i < 5; i++)
	{
		if (employment[i].number == enter)
		{
			printf("��ʼɾ�� %d �ĸ�����Ϣ\n", enter);
			employment[i].number = 0;
			strcpy_s(employment[i].name, "0");
			strcpy_s(employment[i].degree, "0");

			//
			//
			//
			printf("��ɾ��");
		}
		
	}

}