#include "stdio.h"

int main() {
	int limit, speed, fine;

	scanf_s("%d\n%d", &limit, &speed);
	if (limit >= speed) {
		printf("Congratulations, you are within the speed limit!");
	}
	else {
		if ((speed - limit) / 21 == 0) {
			fine = 100;
		}
		else if ((speed - limit) / 31 == 0) {
			fine = 270;
		}
		else {
			fine = 500;
		}
		printf("You are speeding and your fine is $%d.", fine);
	}

	return 0;
}