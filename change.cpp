#include"stdafx.h"
#include"change.h"
#include"employment.h"
#include<Windows.h>
void change(struct Employment employment[5])
{
	float enter;
	int i = 0;
	printf("��������Ҫ�޸ĵı�ţ�");
	scanf_s("%f", &enter);
	for (i = 0; i < 5; i++)
	{
		if (employment[i].number == enter)
		{
			printf("��������Ҫ�޸ĵ�����1.���� 2.���� 3.ѧ��");
			int a;
			scanf_s("%d", &a);
			printf("%d",&a);
			switch (a)
			{
			case 1:
				printf("������Ҫ�ĵĹ���");
				scanf_s("%f", &employment[i].number);
				printf("�޸ĳɹ�  5��󷵻�");
				break;
			case 2:
				printf("������Ҫ�ĵ�����");
				getchar();
				gets_s(employment[i].name);
				printf("�޸ĳɹ�  5��󷵻�");
				break;

			case 3:
				printf("������Ҫ�ĵ�ѧ��");
				getchar();
				gets_s(employment[i].degree);
				printf("�޸ĳɹ�  5��󷵻�");
				break;
			default:
				break;
			}
			
		}

	}
	Sleep(5000);
}