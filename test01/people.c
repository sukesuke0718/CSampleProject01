/* peole.c */
#include"people.h"

void InputPeople(People *data) {

	printf("���O�F");
	scanf("%s", data->name);
	printf("�N��F");
	scanf("%d", &data->age);
	printf("����(1-�j��,2-����)�F");
	scanf("%d", &data->sex);

}

void OutputPeople(People data) {

	char sex[16];

	printf("���O�F%s\n", data.name);
	printf("�N��F%d\n", data.age);

	if (data.sex) {
		strcpy(sex, "�j��");
	}
	else {
		strcpy(sex, "����");
	}

	printf("���ʁF%s\n", sex);
	printf("\n");
}