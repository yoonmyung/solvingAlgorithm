#include <stdio.h>

int main() {
	int N, M;
	long K;

	scanf_s("%d %d %ld", &N, &M, &K);
	printf("%d %d", K / M, K % M);

	return 0;
}