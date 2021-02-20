#include "iostream"
#include "string"
using namespace std;

int main() {
	int N, i = 0, count = 0;
	string input, listofAlphabetseen = "";

	cin >> N;
	while (N--) {
		cin >> input;
		while (i < input.length()) {
			if (int(listofAlphabetseen.find(input[i])) == -1) {
				listofAlphabetseen += input[i++];
			}
			else {
				if (input[i - 1] == input[i]) {
					i++;
				}
				else {
					listofAlphabetseen.clear();
					break;
				}
			}
		}
		if (!listofAlphabetseen.empty()) {
			listofAlphabetseen.clear();
			count++;
		}
		i = 0;
	}
	cout << count;

	return 0;
}