#include "iostream"
#include "string"
#include "queue"
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	queue<int> queue;
	string input;

	cin >> N;
	getchar();
	while (N--) {
		getline(cin, input);
		cin.clear();
		if (input[0] == 'p') {
			if (input[1] == 'u') {
				queue.push(stoi(input.substr(5)));
			}
			else if (input[1] == 'o') {
				if (queue.empty()) {
					cout << -1 << '\n';
				}
				else {
					cout << queue.front() << '\n';
					queue.pop();
				}
			}
		}
		else if (input[0] == 'e') {
			cout << queue.empty() << '\n';
		}
		else if (input[0] == 's') {
			cout << queue.size() << '\n';
		}
		else if (input[0] == 'f') {
			if (queue.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << queue.front() << '\n';
			}
		}
		else {
			if (queue.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << queue.back() << '\n';
			}
		}
	}
	return 0;
}