#include "stdio.h"

int main() {
	int n1, k1, n2, k2;

	scanf_s("%d %d %d %d", &n1, &k1, &n2, &k2);
	printf("%d", n1 * k1 + n2 * k2);

	return 0;
}