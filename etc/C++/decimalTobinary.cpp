#include "iostream"
#include "string"
using namespace std;

//자릿수 제한없는 10진수 -> 2진수 변환기
int main() {
	cin >> decimalNumber;
	while (decimalNumber.compare("")) {
		for (int i = 0; i < octalNumber.length(); i++) {
			if ((subNumber * 10 + (octalNumber[i] - '0')) / 2 != 0) {
				quotient += to_string((subNumber * 10 + (octalNumber[i] - '0')) / 2);
			}
			subNumber = (subNumber * 10 + (octalNumber[i] - '0')) % 2;
		}
		binaryNumber.insert(0, to_string(subNumber));
		octalNumber = quotient.substr(0);
		quotient.clear();
		subNumber = 0;
	}
	cout << binaryNumber;

	return 0;
}