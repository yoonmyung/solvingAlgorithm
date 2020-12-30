#include "stdio.h"

int main() {
	int score, avg = 0;

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &score);
		avg += (score < 40 ? 40 : score);
	}
	printf("%d", avg / 5);

	return 0;
}