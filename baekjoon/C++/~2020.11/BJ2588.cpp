#include <stdio.h>

int main() {
	int firstNum, secondNum;

	scanf_s("%d\n%d", &firstNum, &secondNum);
	printf("%d\n", firstNum * (secondNum % 10));
	printf("%d\n", firstNum * (secondNum % 100 / 10));
	printf("%d\n", firstNum * (secondNum / 100));
	printf("%d\n", firstNum * secondNum);
	return 0;
}