#include <iostream>
#include <string>
using namespace std;

//std:string과 printf, scanf는 호환이 안 됨

int main() {
	int A, B;
	string comparison;

	cin >> A >> B;
	if (A > B)
		comparison = ">";
	else if (A < B)
		comparison = "<";
	else
		comparison = "==";
	cout << comparison;
	return 0;
}