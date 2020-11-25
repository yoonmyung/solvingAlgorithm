#include <stdio.h>

int main() {
	int peoplePer1m, P, article;

	scanf_s("%d %d", &peoplePer1m, &P);
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &article);
		printf("%d ", article - peoplePer1m * P);
	}
	return 0;
}