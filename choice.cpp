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

	printf("         ��ѡ����Ҫִ�в���         \n");
	printf("                    1    ¼��              \n");
	printf("                    2    ɾ��           \n");
	printf("                    3    �޸�           \n");
	printf("                    4    ����         \n");
	printf("                    5    �鿴������         \n");
	int enter;

	
	printf("��ѡ��Ĳ�����\n");
	scanf_s("%d", &enter);
	printf("��ѡ���� %d �Ų���\n", enter);

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
		printf("��ʼִ��5�Ų���");
		look(employment);
		break;
	default:
		printf("�����������������");
	}

	
	
}