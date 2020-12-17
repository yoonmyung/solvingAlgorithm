#include "iostream"
#include "string"
using namespace std;
#define AisBigger 2
#define BisBigger 3

int main() {
	string A, B, answer = "";
	int nextCarry = 0;
	int checkSign[3] = { 1, 1, 1 };
	//checkSign[0] = A의 부호, [1] = B의 부호, [2] = A, B 둘 중 숫자상으로 더 큰 값 구별

	cin >> A >> B;
	if (A[0] == '-') {
		checkSign[0] = -1;
		A = A.erase(0, 1);
	}
	if (B[0] == '-') {
		checkSign[1] = -1;
		B = B.erase(0, 1);
	}
	//A, B 자릿수 맞추기
	if (A.length() > B.length()) {
		while (A.length() > B.length()) {
			B.insert(0, "0");
		}
		checkSign[2] = AisBigger;
	}
	else if (A.length() < B.length()) {
		while (A.length() < B.length()) {
			A.insert(0, "0");
		}
		checkSign[2] = BisBigger;
	}
	if (checkSign[2] == 1 && checkSign[0] * checkSign[1] < 0) {
		for (int i = A.length() - 1; i >= 0; i--) {
			if ((A[i] - '0') > (B[i] - '0')) {
				checkSign[2] = AisBigger;
			}
			else if ((A[i] - '0') < (B[i] - '0')) {
				checkSign[2] = BisBigger;
			}
		}
	}
	for (int i = A.length() - 1; i >= 0; i--) {
		int currentCarry = nextCarry; //이전 자릿수에서 발생한 캐리 갖고오기

		if (checkSign[0] * checkSign[1] < 0 && abs(currentCarry) < 9) {
			//양수+음수 계산의 경우, 순수한 값이 더 큰 쪽에서 캐리 이동이 발생하는데 이를 처리
			if (checkSign[2] == BisBigger && (A[i] - '0') > (B[i] - '0')) {
				currentCarry = 10 * checkSign[1];
			}
			else if (checkSign[2] == AisBigger && (A[i] - '0') < (B[i] - '0')) {
				currentCarry = 10 * checkSign[0];
			}
		}
		int digit = currentCarry 
					+ (A[i] - '0') * checkSign[0] 
					+ (B[i] - '0') * checkSign[1];
		if (abs(currentCarry) >= 9 && i > 0) {
			//캐리 이동이 발생한 경우, 다음 자릿수에서 1 줄여야 한다.
			//만약 다음 자릿수가 0인 경우 
			//이 또한 자신의 다음 자릿수에서 캐리를 받아온 것이므로 9로 만든다.
			if (checkSign[2] == BisBigger) {
				if (B[i - 1] == '0') {
					nextCarry = 9 * checkSign[1];
				}
				else {
					int carry = (B[i - 1] - '0') - 1;
					B[i - 1] = carry + '0';
					nextCarry = 0;
				}
			}
			else {
				if (A[i - 1] == '0') {
					nextCarry = 9 * checkSign[0];
				}
				else {
					int carry = (A[i - 1] - '0') - 1;
					A[i - 1] = carry + '0';
					nextCarry = 0;
				}
			}
		}
		else {
			nextCarry = abs(digit) >= 10? digit / 10 : 0;
		}
		answer.insert(0, to_string(digit % 10));
	}
	//마지막 자릿수에서 발생한 캐리가 있을 경우 자릿수 추가
	if (nextCarry != 0) {
		answer.insert(0, to_string(nextCarry));
	}
	//자릿수를 맞추기 위해 넣었던 0을 제거
	while (answer[0] == '0' && answer.length() > 1) {
		answer.erase(0, 1);
	}
	for (int i = 1; i < answer.length(); i++) {
		if (answer[i] == '-') {
			answer.erase(i, 1);
		}
	}
	cout << answer;

	return 0;
}