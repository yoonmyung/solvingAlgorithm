#include "stdio.h"
#include <time.h>

//에라스토테네스의 체 - 소수 구하기
//배수를 제외하는 것

int main() {
	clock_t startTime, endTime;
	int M, N;
	int* numbers;

	scanf_s("%d %d", &M, &N);
	numbers = new int[N + 1];
	for (int i = 0; i <= N; i++)
		numbers[i] = 0;
	startTime = clock();
	if (M == 1)
		M++;
	for (int i = 2; i <= N; i++) {
		if (numbers[i] == 1)	//이미 소수 대상에서 제외된 누군가의 "배수"
			continue;
		for (int j = i * 2; j <= N; j += i) {
			numbers[j] = 1;	//배수 거르기
		}
	}
	for (int i = M; i <= N; i++) {
		if (numbers[i] == 0)
			printf("%d\n", i);
	}
	endTime = clock();
	printf("-------------%f", (double)(endTime - startTime));
	delete[] numbers;
	return 0;
}