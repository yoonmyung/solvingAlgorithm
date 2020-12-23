#include <iostream>
#include <string>
using namespace std;

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