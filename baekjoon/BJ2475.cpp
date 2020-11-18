#include <iostream>
#include "math.h"
using namespace std;

int main() {
	int originNum, verifiedNum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> originNum;
		verifiedNum += pow(originNum, 2);
	}
	cout << verifiedNum % 10;
	return 0;
}