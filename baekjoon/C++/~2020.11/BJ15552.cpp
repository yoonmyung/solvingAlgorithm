#include "stdio.h"
#include "time.h"

//printf, scanf가 속도가 빠르니 애용하자! 
//cin, cout은 속도가 느려서 만일의 경우 이것 때문에 시간 초과가 날 수 있음

int main() {
//	clock_t startTime, endTime;
	int T, A, B;

	scanf_s("%d", &T);
	//	startTime = clock();
	while (T > 0) {
		scanf_s("%d %d", &A, &B);
		printf("%d\n", A + B);
		T--;
	}
	//	endTime = clock();
//	printf("-------------%f", (double)(endTime - startTime));
	return 0;
}