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

/* �l�f�[�^����͂��� */
extern void InputPeople(People *data);
/* �l�f�[�^���o�͂��� */
extern void OutputPeople(People data);

#endif