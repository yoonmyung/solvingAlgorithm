#include <iostream>
using namespace std;

int main() {
	int originalInput = 0, count = 1;
	
	cin >> originalInput;
	int changedInput = originalInput;
	while (changedInput % 10 * 10 +(changedInput / 10 + changedInput % 10) % 10 
		!= originalInput) {
		count++;
		changedInput = changedInput % 10 * 10 +
		(changedInput / 10 + changedInput % 10) % 10;
	}
	cout << count;
	return 0;
}