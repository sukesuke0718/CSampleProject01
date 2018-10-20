/* peole.c */
#include"people.h"

void InputPeople(People *data) {

	printf("名前：");
	scanf("%s", data->name);
	printf("年齢：");
	scanf("%d", &data->age);
	printf("性別(1-男性,2-女性)：");
	scanf("%d", &data->sex);

}

void OutputPeople(People data) {

	char sex[16];

	printf("名前：%s\n", data.name);
	printf("年齢：%d\n", data.age);

	if (data.sex) {
		strcpy(sex, "男性");
	}
	else {
		strcpy(sex, "女性");
	}

	printf("性別：%s\n", sex);
	printf("\n");
}