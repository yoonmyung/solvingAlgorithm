/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, X;
	string inputOfElementsofA;

	cin >> N >> X;
	cin.ignore();
	getline(cin, inputOfElementsofA);
	int* intVersionofA = new int[inputOfElementsofA.length()];
	int startingPointofNumber = 0, endPointofNumber = 0, index = 0;
	while (endPointofNumber <= inputOfElementsofA.length()) {
		if ( endPointofNumber == inputOfElementsofA.length()
			|| inputOfElementsofA.at(endPointofNumber) == ' ') {
			intVersionofA[index++] =
				stoi(inputOfElementsofA
					.substr(startingPointofNumber,
						endPointofNumber - startingPointofNumber));
			startingPointofNumber = endPointofNumber + 1;
		}
		endPointofNumber++;	
	}
	for (int i = 0; i < index; i++) {
		if (intVersionofA[i] < X) {
			cout << intVersionofA[i] << " ";
		}
	}
	delete[] intVersionofA;
	return 0;
}
*/

//other method
#include <iostream>
using namespace std;

int n, x, k;
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> x;	
		// 배열 원소를 스페이스바로 구별하여 입력받는 것은 "for문 + cin"만으로도 충분히 구현 된다!!!
		if (x < k) cout << x << ' ';
	}
}