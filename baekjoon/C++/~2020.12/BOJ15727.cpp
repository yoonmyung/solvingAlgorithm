#include "stdio.h"
#define distancePerMin 5

int main() {
	int distance;

	scanf_s("%d", &distance);
	printf("%d", (distance % distancePerMin == 0) ? 
		distance / distancePerMin : distance / distancePerMin + 1);
	//"(distance + 4) / 5" 혹은 "distance / 5 + (distance % 5 != 0)" 로 대체 가능 
	return 0;
}