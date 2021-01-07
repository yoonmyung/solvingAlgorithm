#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n, instruction, registor;
	stack<int> LVM;
	string* instructions;

	cin >> n;
	instructions = new string[n + 1];
	for (int i = 0; i <= n; i++) {
		getline(cin, instructions[i]);
		cin.clear();
	}
	int index = 1;
	while (true) {
		if (!instructions[index].substr(0, 2).compare("PU")) {
			int value = stoi(instructions[index].substr(5));
			LVM.push(value);
		}
		else if (!instructions[index].substr(0, 2).compare("ST")) {
			registor = LVM.top();
			LVM.pop();
		}
		else if (!instructions[index].substr(0, 2).compare("LO")) {
			LVM.push(registor);
		}
		else if (!instructions[index].substr(0, 2).compare("PL")) {
			int value1 = LVM.top();
			LVM.pop();
			int value2 = LVM.top();
			LVM.pop();
			LVM.push(value1 + value2);
		}
		else if (!instructions[index].substr(0, 2).compare("TI")) {
			int value1 = LVM.top();
			LVM.pop();
			int value2 = LVM.top();
			LVM.pop();
			LVM.push(value1 * value2);
		}
		else if (!instructions[index].substr(0, 2).compare("IF")) {
			int value = LVM.top();
			LVM.pop();
			if (!value) {
				index = stoi(instructions[index].substr(7));
			}
		}
		else {
			cout << LVM.top();
			break;
		}
		index++;
	}

	return 0;
}