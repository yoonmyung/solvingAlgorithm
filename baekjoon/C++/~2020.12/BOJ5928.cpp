#include "stdio.h"

int main() {
	int D, H, M;

	scanf_s("%d %d %d", &D, &H, &M);
	printf("%d", (M + H * 60 + D * 60 * 24) - (11 + 11 * 60 + 11 * 60 * 24) < 0 ? -1 :
				 (M + H * 60 + D * 60 * 24) - (11 + 11 * 60 + 11 * 60 * 24));

	return 0;
}