#include <iostream>
#include <time.h>
using namespace std;

//시간초과가 떴다는 것은 내 식에 시간제한을 걸라는 뜻이 아니다. 로직을 바꾸라는 뜻
//반복문이 시간 초과가 뜬다 -> 1. 중첩 반복문 개수를 줄인다 2. 반복문 문제가 아닌 방정식 문제이다
int main() {
	long long A, B, C;

	cin >> A >> B >> C;
	if (B >= C) {
		//B >= C이면 아래 부등식을 평생 만족할 수 없다.
		cout << -1;
	}
	else {
		/*
			C * 손익분기점 > A + B * 손익분기점 이 되는 손익분기점을 찾는 것
			이걸 반복문으로 돌리면 한없이 돌아감
			반복문이 아닌 방정식으로 풀면 됨
			C * 손익분기점 = A + B * 손익분기점 "+ 1" (개수이므로 무조건 자연수이다)
			인 손익분기점을 찾으면 된다.
		*/
		cout << A / (C - B) + 1;
	}
	/*
	long long A, B, C, breakEventPoint = 1;
	clock_t startTime, endTime;

	cin >> A >> B >> C;
	while (C * breakEventPoint < A + B * breakEventPoint) {
		endTime = clock();
		if (endTime - startTime >= 345) {
			breakEventPoint = -2;
			break;
		}
		breakEventPoint++;
	}
	cout << breakEventPoint + 1;
	*/
	return 0;
}