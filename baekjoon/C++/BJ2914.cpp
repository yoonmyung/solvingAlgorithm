#include <cstdio>

int main() {
	int A, I;

	scanf_s("%d %d", &A, &I);
	I--;	// 올림하기 전 I
	printf("%d", A * I + 1);	// "+ 1"은 올림하는 것과 같다
}