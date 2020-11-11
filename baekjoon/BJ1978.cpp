#include "stdio.h"

int main() {
	int N, input, dividingNumber = 2, count = 0;

	scanf_s("%d", &N);
	while (N > 0) {
		N--;
		scanf_s("%d", &input);
		if (input == 1)
			continue;
		while (input % dividingNumber)
			dividingNumber++;
		if (input == dividingNumber)
			count++;
		dividingNumber = 2;
	}
	printf("%d", count);
	return 0;
}