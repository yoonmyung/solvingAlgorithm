#include "iostream"
#include "string"
using namespace std;

//FFT(고속 푸리에 변환) 이용해서 다시 풀기
//카라츠바의 빠른 곱셈도 찾아보기

int main() {
	string A, B, subResult = "", result = "";
	int nextRound = 0;

	cin >> A >> B;
	if (A.length() > B.length()) {
		while (A.length() > B.length()) {
			B.insert(0, "0");
		}
	}
	else {
		while (A.length() < B.length()) {
			A.insert(0, "0");
		}
	}
	string* setofSubResults = new string[A.length()];
	for (int j = A.length() - 1; j >= 0; j--) {
		for (int i = A.length() - j - 1; i > 0; i--) {
			subResult.insert(0, "0");
		}
		for (int i = B.length() - 1; i >= 0; i--) {
			int currentRound = nextRound;
			subResult.insert(0, to_string(
				((A[i] - '0') * (B[j] - '0') + currentRound) % 10));
			nextRound = ((A[i] - '0') * (B[j] - '0') + currentRound) / 10;
		}
		if (nextRound > 0) {
			subResult.insert(0, to_string(nextRound));
			nextRound = 0;
		}
		while (subResult.length() != A.length() * 2 - 1) {
			subResult.insert(0, "0");
		}
		setofSubResults[j] = subResult;
		subResult.clear();
	}
	for (int j = A.length() * 2 - 2; j >= 0; j--) {
		int digit = nextRound;
		for (int i = A.length() - 1; i >= 0; i--) {
			digit += setofSubResults[i][j] - '0';
		}
		nextRound = digit / 10;
		result.insert(0, to_string(digit % 10));
	}
	while (result[0] == '0') {
		result.erase(0, 1);
	}
	cout << result;
	delete[] setofSubResults;

	return 0;
}