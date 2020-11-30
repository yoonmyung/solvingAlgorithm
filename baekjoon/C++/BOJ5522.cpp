#include <stdio.h>

int main() {
	int score = 0;

	for (int i = 0; i < 5; i++) {
		int value;

		scanf_s("%d", &value);
		score += value;
	}
	printf("%d", score);

	return 0;
}