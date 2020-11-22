#include <iostream>
#include "math.h"
#include "stdio.h"
using namespace std;

// std::string과 호환되는 것은 cin, cout / printf, scanf는 호환 안 됨
// 자료형 장난

//solution 1 (bbbbb)
/*
int main() {
	int input;
	scanf_s("%X", &input);
	printf("%d", input);
	return 0;
}
*/

//solution 2 ( switch() 부분은 내가 풀었으나 아예 참고하지 말자)
int main() {
	string input;
	int digit, numberOfDigit, changedNum = 0;

	cin >> input;
	digit = input.size() - 1;
	while (digit >= 0) {
		numberOfDigit =
			(input[digit] >= 'A' && input[digit] <= 'F' ?
				input[digit] - 'A' + 10 : input[digit] - '0');
		changedNum += numberOfDigit * pow(16, input.size() - digit - 1);
		digit--;
		/*
		switch (input.at(digit)) {
		case 'A':
			numberOfDigit = 10; break;
		case 'B':
			numberOfDigit = 11; break;
		case 'C':
			numberOfDigit = 12; break;
		case 'D':
			numberOfDigit = 13; break;
		case 'E':
			numberOfDigit = 14; break;
		case 'F':
			numberOfDigit = 15; break;
		default:
			numberOfDigit = input.at(digit) - '0'; break;
		}
		*/
	}
	cout << changedNum;
	return 0;
}