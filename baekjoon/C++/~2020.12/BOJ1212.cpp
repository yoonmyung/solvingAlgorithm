#include "iostream"
#include "string"
using namespace std;

int main() {
	string binaryNumber = "", octalNumber;
	int j = 4;

	cin >> octalNumber;
	for (int i = 0; i < octalNumber.length(); i++) {
		while (j > 0) {
			binaryNumber.insert(binaryNumber.length(), 1, (octalNumber[i] - '0') / j + '0');
			octalNumber[i] = (octalNumber[i] - '0') % j + '0';
			j /= 2;
		}
		j = 4;
	}
	while (binaryNumber[0] == '0' && binaryNumber.length() > 1) {
		binaryNumber.erase(0, 1);
	}
	cout << binaryNumber;

	return 0;
}