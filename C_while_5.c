#include <stdio.h>

int main(void)
{
	int a, A, b = 1;

	printf("���� ������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &a);

	A = a;

	while (a != 0)
	{
			b *= a;
			a--;
	}

	printf("%d!�� %d�Դϴ�.\n", A, b);

	return 0;
}