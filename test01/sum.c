/* sum.c */
int Public; /* �ϐ��̎��̂��쐬 */

int sum(int min, int max) {

	int num;
	num = (min + max) * (max - min + 1) / 2;

	return num;
}