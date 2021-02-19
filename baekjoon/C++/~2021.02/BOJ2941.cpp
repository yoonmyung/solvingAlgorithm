#include "iostream"
using namespace std;

int main() {
	int count = 0;
	int index = 0;
	string input;
	bool isD = false;
	string croatia = "cdzlns";

	cin >> input;
	while (index < input.size()) {
		switch (croatia.find(input[index])) {
		case 0:
			if (input[++index] != '-' && input[index] != '=') {
				index--;
			}
			count++;
			break;
		case 1:
			if (input[++index] == '-') {
				count++;
				break;
			}
			else if (input[index] != 'z') {
				count++;
				index--;
				break;
			}
			isD = true;
		case 2:
			if (input[++index] != '=') {
				if (isD) {
					count++;
				}
				index--;
			}
			isD = false;
			count++;
			break;
		case 3:
			if (input[++index] != 'j') { 
				index--;
			}
			count++;
			break;
		case 4:
			if (input[++index] != 'j') {
				index--;
			}
			count++;
			break;
		case 5:
			if (input[++index] != '=') {
				index--;
			}
			count++;
			break;
		default:
			count++;
			break;
		}
		index++;
	}
	cout << count;

	return 0;
}