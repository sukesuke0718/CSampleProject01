/* people.h */
#ifndef _PEOPLE_H_
#define _PEOPLE_H_

#include<stdio.h>
#include<string.h>

typedef struct {
	char name[256];
	int age;
	int sex;
}People;

/* 個人データを入力する */
extern void InputPeople(People *data);
/* 個人データを出力する */
extern void OutputPeople(People data);

#endif