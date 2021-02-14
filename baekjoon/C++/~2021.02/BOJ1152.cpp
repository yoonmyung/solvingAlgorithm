#include "iostream"
#include "string"
using namespace std;

int main() {
	int count = 0;
	string input;

	//solution 2
	while (cin >> input) {
		if (cin.eof()) {
			break; 
			//파일의 끝(windows에서는 ctrl+Z)이 들어오면 종료, 이 if문을 생략해도 동일하게 돌아감
		}
		count++;
	}
/*
	getline(cin, input);
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == ' ') {
			if (i > 0 && i < input.size() - 1) {
				count++;
			}
		}
		if (i == input.size() - 1) {
			if (count > 0 || input[i] != ' ' || input.size() > 1 && input[i - 1] != ' ') {
				count++;
			}
		}
	}
*/
	cout << count;

	return 0;
}