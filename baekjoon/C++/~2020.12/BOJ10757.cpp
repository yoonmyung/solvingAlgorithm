#include "iostream"
#include "string"
using namespace std;

int main() {
	string A, B, answer = "";
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
	for (int i = A.length() - 1; i >= 0; i--) {
		int currentRound = nextRound;
		int digit = (A[i] - '0') + (B[i] - '0');
		nextRound = (currentRound + digit >= 10 ? (currentRound + digit) / 10 : 0);
		answer.insert(0, to_string((currentRound + digit) % 10));
	}
	if (nextRound > 0) {
		answer.insert(0, to_string(nextRound));
	}
	cout << answer;

	return 0;
}