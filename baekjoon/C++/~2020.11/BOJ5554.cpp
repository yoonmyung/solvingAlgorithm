#include "stdio.h"

int main() {
	int totalTime = 0;

	for (int i = 0; i < 4; i++) {
		int eachDistance;

		scanf_s("%d", &eachDistance);
		totalTime += eachDistance;
	}
	printf("%d\n%d", totalTime / 60, totalTime % 60);

	return 0;
}