#include "stdio.h"

int main() {
	int hour, min, cookingMin, cookingHour;

	scanf_s("%d %d", &hour, &min);
	scanf_s("%d", &cookingMin);
	cookingHour = cookingMin / 60;
	cookingHour += hour;
	cookingMin %= 60;
	cookingHour += (cookingMin + min) / 60;
	printf("%d %d", (cookingHour >= 24 ? cookingHour - 24 : cookingHour), (cookingMin + min) % 60);

	return 0;
}