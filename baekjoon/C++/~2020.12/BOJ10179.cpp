#include "stdio.h"

int main() {
	int count;
	double price;

	scanf_s("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf_s("%lf", &price);
		printf("$%.2lf\n", price * 0.8);
	}

	return 0;
}