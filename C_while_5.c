#include <stdio.h>

int main(void)
{
	int a, A, b = 1; // 선언

	printf("양의 정수를 입력하시오. : ");
	scanf_s("%d", &a);

	A = a;

	while (a != 0)
	{
			b *= a;
			a--;
	}

	printf("%d!은 %d입니다.\n", A, b);

	return 0;
}
