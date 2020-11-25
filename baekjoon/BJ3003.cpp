#include "stdio.h"

int main() {
	int numberOfPieces;

	for (int i = 0; i < 6; i++) {
		scanf_s("%d", &numberOfPieces);
		if (i < 2) {
			printf("%d ", 1 - numberOfPieces);
		}
		else if (i < 5) {
			printf("%d ", 2 - numberOfPieces);
		}
		else {
			printf("%d ", 8 - numberOfPieces);
		}
	}
	return 0;
}