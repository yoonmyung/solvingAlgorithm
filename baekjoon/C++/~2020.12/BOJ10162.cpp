#include "stdio.h"

int main() {
	int tot, eachTime[3];

	scanf_s("%d", &tot);
	//solution 2
	if (tot % 10) {
		printf("-1");
	}
	else {
		printf("%d %d %d", tot / 300, (tot % 300) / 60, (tot % 60) / 10);
	}
	/*
	eachTime[0] = tot / 300;
	eachTime[1] = tot % 300 / 60;
	eachTime[2] = tot % 300 % 60 / 10;
	if (eachTime[0] * 300 + eachTime[1] * 60 + eachTime[2] * 10 == tot) {
		printf("%d %d %d", eachTime[0], eachTime[1], eachTime[2]);
	}
	else {
		printf("-1");
	}
	*/
	return 0;
}