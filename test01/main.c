#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main(void) {

	/*
	区切り文字がカンマで入力された数字の
	一覧を作成するプログラム
	*/
	int i, j, val[10];
	char str[32],*ch;

	/* 画面から入力した文字列を取得する */
	fgets(str, sizeof(str), stdin);

	/* 始めの単語を検索する */
	ch = strtok(str, ",\n");

	for (i = 0; i < 10; i++) {
		/* 単語が見つからない場合ループを抜ける */
		if (ch == NULL) {
			break;
			/* 単語が見つかった場合、配列にセットする */
		}else {
			val[i] = atoi(ch);
		}
		/* 次の配列を探す */
		ch = strtok(NULL,",\n");
	}
	
	/* 配列の中身を表示する */
	for (j = 0; j < i; j++) {
		printf("%d\n",val[j]);
	}

	return	0;
}
