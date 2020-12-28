#include "stdio.h"

int main() {
	int antenna, eyes;

	scanf_s("%d\n%d", &antenna, &eyes);
	if (antenna <= 2) {
		if (eyes >= 2) {
			printf("VladSaturnian\n");
		}
		if (eyes <= 3) {
			printf("GraemeMercurian\n");
		}
	}
	else {
		if (eyes <= 4) {
			printf("TroyMartian\n");
		}
		if (eyes >= 2 && antenna <= 6) {
			printf("VladSaturnian\n");
		}
	}

	return 0;
}