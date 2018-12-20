#pragma once
#ifndef EMPLOYMENT_H
#define EMPLOYMENT_H

typedef enum {ÄÐ£¬Å®}SEX;
struct Employment
{
	float number=0;
	char name[20];
	char sex = {'0'}; //Ã¶¾Ù
	char birth[20];  //
	char degree[20] = {'0'}; //Ã¶¾Ù
	char adress[20];
};


#endif  //EMPLOYMENT_H