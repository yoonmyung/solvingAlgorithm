#include <iostream>
using namespace std;

//long long 범위 초과 경우 제외하고 구현함
//C++의 Big integer 해결 방법은?

int main() {
	long long n, m;
	long long rest = 0;

	cin >> n >> m;
	rest += (n / m) % 10 * m + n % m;
	n -= rest;
	cout << n / m << "\n" << rest;
	return 0;
}