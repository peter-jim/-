#include "stdafx.h"
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
#include"home.h"
#include"employment.h"
/*
struct Employment
{
	char number[20]="0";
	char name[20]="0";
	char sex[2]="0"; //枚举
	char birth[20]="0";  //
	char degree[20]="0"; //枚举
	char adress[20]="0";
};
*/


int main()
{
	//struct Employment* employment = (struct Employment*)malloc(sizeof(Employment)) ; //分配内存
	struct Employment employment[5];


while (1)
{
	system("cls");
	home();
	log(employment);
}
	

	
	return 0;
}
