#include "stdafx.h"
#include"log.h"
#include<stdlib.h>  //exitͷ�ļ�
#include <windows.h> 
#include"choice.h"
#include"employment.h"

void log(struct Employment employment[5]) {
	printf("����1����ϵͳ�������˳�ϵͳ\n");
	int enter;
    scanf_s("%d", &enter);
	if (enter == 1)
	{
		Sleep(1000);
		printf("����ְ������ϵͳ");
		choice(employment);
	}
	else
	{
		printf("�˳�ְ������ϵͳ");
		printf("5����˳�");
		Sleep(5000);
		exit(-1);
	}

}