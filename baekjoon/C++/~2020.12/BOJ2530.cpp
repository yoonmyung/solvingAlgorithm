#include "stdio.h"

int main() {
	int hour, min, sec, cookingSec;

	scanf_s("%d %d %d", &hour, &min, &sec);
	scanf_s("%d", &cookingSec);
	sec += cookingSec;
	min += sec / 60;
	hour += min / 60;
	printf("%d %d %d", (hour >= 24 ? hour % 24 : hour), min % 60, sec % 60); 
	//hour도 바로 hour%24 출력해도 같은 결과 나옴

	return 0;
}