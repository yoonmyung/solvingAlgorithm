#include "iostream"
#include "string"
#include "stack"
using namespace std;

int main() {
	int N;
	string input;
	stack<int> stack;

	cin >> N;
	getchar();
	while (N-- > 0) {
		getline(cin, input);
		cin.clear();
		if (!input.substr(0, 2).compare("pu")) {
			stack.push(stoi(input.substr(5)));
		}
		else if (!input.substr(0, 2).compare("po")) {
			if (stack.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << stack.top() << '\n';
				stack.pop();
			}
		}
		else if (!input.substr(0, 2).compare("si")) {
			cout << stack.size() << '\n';
		}
		else if (!input.substr(0, 2).compare("em")) {
			cout << stack.empty() << '\n';
		}
		else {
			if (stack.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << stack.top() << '\n';
			}
		}
	}

	return 0;
}