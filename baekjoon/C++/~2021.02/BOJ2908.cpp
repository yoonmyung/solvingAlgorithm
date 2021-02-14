#include "iostream"
#include "string"
using namespace std;

int main() {
	string input;
	int numbers[2] = { 0, };
	int i = 6, bit = 100;

	getline(cin, input);
	while (i >= 0) {
		if (input[i] == ' ') {
			bit = 100;
		}
		else {
			numbers[i > 3] += (input[i] - '0') * bit;
			bit /= 10;
		}
		i--;
	}
	cout << (numbers[0] > numbers[1] ? numbers[0] : numbers[1]);

	return 0;
}