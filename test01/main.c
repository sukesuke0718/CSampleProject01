#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main(void) {

	/*
	��؂蕶�����J���}�œ��͂��ꂽ������
	�ꗗ���쐬����v���O����
	*/
	int i, j, val[10];
	char str[32],*ch;

	/* ��ʂ�����͂�����������擾���� */
	fgets(str, sizeof(str), stdin);

	/* �n�߂̒P����������� */
	ch = strtok(str, ",\n");

	for (i = 0; i < 10; i++) {
		/* �P�ꂪ������Ȃ��ꍇ���[�v�𔲂��� */
		if (ch == NULL) {
			break;
			/* �P�ꂪ���������ꍇ�A�z��ɃZ�b�g���� */
		}else {
			val[i] = atoi(ch);
		}
		/* ���̔z���T�� */
		ch = strtok(NULL,",\n");
	}
	
	/* �z��̒��g��\������ */
	for (j = 0; j < i; j++) {
		printf("%d\n",val[j]);
	}

	return	0;
}
