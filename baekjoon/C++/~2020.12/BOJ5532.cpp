#include "iostream"
using namespace std;

int main() {
	int L, A, B, C, D;

	cin >> L >> A >> B >> C >> D;
	cout << L - max(A / C + (A % C ? 1 : 0), B / D + (B % D ? 1 : 0));

	return 0;
}