#include "stdio.h"
#include "algorithm"
using namespace std;

// 문제에 없는 조건을 넣어서 자체 난이도 올리지 말기

//method 2 
//(반복문 1개, 배열 입력받으면서 동시에 배열 내 최솟값 간단하게 구하기)
int main() {
	int N, M = 0, score, totalScore = 0;

	scanf_s("%d", &N);
	int temp = N;
	while (temp--) {
		scanf_s("%d", score);
		if (M < score)
			M = score;
		totalScore += score;
	}
	printf("%lf", (double)totalScore * 100 / M / N);
	//결국 모든 점수에 / M * 100을 하기 때문에, totalScore 값에 1번만 해줘도 동일한 결과가 나온다
	return 0;
}

/*
int main() {
	int N, temp;
	double M, totalScore = 0;
	double* subjects;

	scanf_s("%d", &N);
	temp = N;
	subjects = new double[N];
	while (temp > 0)
		scanf_s("%lf", &subjects[--temp]);
	temp = N;
	M = *max_element(subjects, subjects + N);
	while (temp--) {
		subjects[temp] = subjects[temp] / M * 100;
		totalScore += subjects[temp];
	}
	printf("%lf", totalScore / (double) N);
	return 0;
}
*/