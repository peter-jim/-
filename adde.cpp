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
	printf("��ʼ¼��ѧ������");

	

	for (i; i < 5; i++) {
		
		//employment[i] = (struct Employment*)malloc(sizeof(struct Employment)); //�ڴ����
		printf("�����빤��");

		scanf_s("%d", &enter);
		int j = 0;
		int flag = 0;

		for (j; j < 5; j++) {
			//printf("��ʼ���");
			if (enter == employment[j].number)
			{
				printf("����Ϣ��¼������������");
				printf("   ��5����ٴ�����\n");
				Sleep(5000);
				printf("���������빤��");
				flag++;
				i--;
				break;
			}

		}

		if (flag==0)
		{
		employment[i].number = enter;
		printf("����Ĺ���Ϊ%.0f", employment[i].number);
		printf("����������\n");
		getchar();
		gets_s(employment[i].name);
		printf("\n����Ϊ%s\n", employment[i].name);

		printf("������ѧ��");
		gets_s(employment[i].degree);
		printf("\nѧ��Ϊ%s", employment[i].degree);
		}
		
		/*
		
		��������
		
		*/
		
		printf("\n��ѡ���Ƿ����¼������  1.���� 2.�˳� \n ");
		scanf_s("%d", &enter);
		if (enter != 1)
			   break;
	}
	

	printf("¼�����\n");
	
}