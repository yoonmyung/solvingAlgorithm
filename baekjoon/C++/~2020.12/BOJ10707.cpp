#include "stdio.h"

int main() {
	int A, B, C, D, P;

	scanf("%d %d %d %d %d", &A, &B, &C, &D, &P);
	if (P < C) {
		printf("%d", (A * P > B ? B : A * P));
	}
	else {
		printf("%d", (A * P > B + (P - C) * D ? B + (P - C) * D : A * P));
	}

	return 0;
}