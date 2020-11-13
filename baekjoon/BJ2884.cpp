#include <iostream>
using namespace std;

int main() {
	int hourtoGetup, mintoGetup;

	cin >> hourtoGetup >> mintoGetup;
	if (mintoGetup < 45) {
		if (hourtoGetup > 0)
			hourtoGetup--;
		else
			hourtoGetup = 23;
		mintoGetup += 15;
	}
	else {
		mintoGetup -= 45;
	}
	cout << hourtoGetup << " " << mintoGetup;
	return 0;
}