#include "iostream"
#include <cmath>
#include <string>
using namespace std;

int main() {
	int H, root, layer = 1;
	string totalPath;

	cin >> H;
	getchar();
	getline(cin, totalPath);
	root = pow(2, H + 1) - 1;
	while (totalPath.length()) {
		char path = totalPath[0];
		if (path == 'L') {
			root -= layer;
			layer *= 2;
		}
		else {
			root -= (layer + 1);
			layer = layer * 2 + 1;
		}
		totalPath.erase(0, 1);
	}
	cout << root;

	return 0;
}