#include "stdio.h"

//출력 형식을 문제에서 요구한대로 잘 맞추자 (\n 이런거)

int main() {
	int C, N, higherthanAvg = 0, totalScore = 0;
	int* scores;

	scanf_s("%d", &C);
	while (C > 0) {
		scanf_s("%d", &N);
		scores = new int[N];
		for (int i = 0; i < N; i++) {
			scanf_s("%d", &scores[i]);
			totalScore += scores[i];
		}
		for (int i = 0; i < N; i++) {
			if (scores[i] > totalScore / N)
				higherthanAvg++;
		}
		printf("%.3f%%\n", (double) higherthanAvg / (double) N * 100);
		higherthanAvg = 0;
		totalScore = 0;
		C--;
		delete[] scores;	
	}
	return 0;
}