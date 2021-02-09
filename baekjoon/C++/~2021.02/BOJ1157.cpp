#include "iostream"
#include "algorithm"
using namespace std;

int main() {
	string S;
	int alphabet[26] = { 0, };
	int max = 0, count = 0;

	cin >> S;
	transform(S.begin(), S.end(), S.begin(), ::toupper);
	for (int i = 0; i < S.length(); i++) {
		alphabet[S[i] - 'A']++;
	}
	for (int i = 1; i < 26; i++) {
		if (alphabet[max] < alphabet[i]) {
			count = 0;
			max = i;
		}
		else if (alphabet[max] == alphabet[i]) {
			count++;
		}
 	}
	if (count > 0) {
		cout << '?';
	}
	else {
		cout << char('A' + max);
	}
	return 0;
}