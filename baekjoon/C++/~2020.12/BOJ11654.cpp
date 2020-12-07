#include "stdio.h"

int main() {
	char input;

	scanf_s("%c", &input);
	printf("%d", input);
	//위의 두 문장을 printf("%d", getchar()); 한 문장으로 대체 가능

	return 0;
}