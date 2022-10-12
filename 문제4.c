#include<stdio.h>//2번문제 방법 1번 입니다. 1000이하의 짝수를 출력하는 코드입니다.
int main() {

	int x, i, j;
	printf("몇줄?:");
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