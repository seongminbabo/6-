#include<stdio.h>//2������ ��� 1�� �Դϴ�. 1000������ ¦���� ����ϴ� �ڵ��Դϴ�.
int main() {

	int x, i, j;
	printf("����?:");
	scanf_s("%d", &x);
	for (i = 1; i <= x; i++) {
		for (j = 1; j <= x - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");


	}
	return 0;
}