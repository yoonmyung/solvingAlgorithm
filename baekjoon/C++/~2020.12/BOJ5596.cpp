#include "iostream"
using namespace std;

int main() {
	int score, sumMin = 0, sumMan = 0;

	for (int i = 0; i < 8; i++) {
		cin >> score;
		if (i > 3) {
			sumMin += score;
		}
		else {
			sumMan += score;
		}
	}
	cout << (sumMin >= sumMan ? sumMin : sumMan);

	return 0;
}