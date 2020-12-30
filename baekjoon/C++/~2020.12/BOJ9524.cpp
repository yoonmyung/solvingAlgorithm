#include "stdio.h"

int main() {
	//solution 2
	int digit;
	
	scanf("%d", &digit);
	printf("%c", "1723"[digit - 1]);

	/*
	switch (getchar()) {
	case '1':
		printf("1");
		break;
	case '2':
		printf("7");
		break;
	case '3':
		printf("2");
		break;
	case '4':
		printf("3");
		break;
	}
	*/
	return 0;
}