#include <iostream>
#include <vector>

//주석이 틀린 내 코드, 이건 정답코드. 아직 코드 이해를 못했다. 이게 왜 스택문제일까..?
int main()
{
	int n;
	scanf_s("%d", &n);
	std::vector<int> vec(n);

	for (int i = 0; i < n; ++i)
		scanf_s("%d", &vec[i]);

	int rightLen = 1;
	for (int i = n - 1; i > 0; --i)
	{
		if (vec[i - 1] < vec[i])
			++rightLen;
		else break;
	}

	printf("%d", n - rightLen);

	return 0;
}

/*
#include "stdio.h"
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, count = 0, passCount = 0;
	vector<int> cows;

	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		int input;

		scanf_s("%d", &input);
		cows.push_back(input);
	}
	while (!cows.empty()) {
		int cow = cows.front(), position;

		position = (cow > 1 ? find(cows.begin(), cows.end(), cow - 1) - cows.begin() :
			find(cows.begin(), cows.end(), N) - cows.begin());
		// if문 (정렬이 완료됐는지 확인하는 조건) 이 부분이 문제
		if (position >= cows.size() || cow == 1 && position + 1 == cows[position]) {
			cows.erase(cows.begin());
			continue;
		}
		cows.insert(cows.begin() + position + 1, cow);
		cows.erase(cows.begin());
		count++;
	}
	printf("%d", count);

	return 0;
}
*/