#include "stdio.h"

int main() {
	int month, day;
    
	scanf("%d %d", &month, &day);
	//solution 2
	int n = a * 100 + b;
	if (n == 218) printf("Special");
	else if (n < 218) printf("Before");
	else printf("After");
	/*
	if (month > 2 || (month == 2 && day > 18)) {
		printf("After");
	}
	else if (month == 2 && day == 18) {
		printf("Special");
	}
	else {
		printf("Before");
	}
	*/
	return 0;
}