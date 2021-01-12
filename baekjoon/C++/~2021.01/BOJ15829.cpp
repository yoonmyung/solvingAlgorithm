#include "iostream"
#include "cmath"
using namespace std;
#define M 1234567891
#define r 31

//나눗셈 혹은 나머지 연산자 => "큰 수" 문제인지 한 번 더 생각해보기!
//숫자의 자릿수가 줄어드는 연산이기 때문에, 어쩌면 큰 수 문제가 아닐 수 있음

int main() {
	string input;
	int length;
	long long R = 1;
	long long hash = 0;

	cin >> length;
	cin >> input;
	for (int i = 0; i < length; i++) {
		hash = (hash + (input[i] - 96) * R) % M;
		R = R * r % M;
	}
	cout << hash;

	return 0;
}