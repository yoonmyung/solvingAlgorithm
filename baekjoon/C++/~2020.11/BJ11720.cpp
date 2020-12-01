#include <iostream>
#include <cmath>
using namespace std;

//(참고) int는 9자리, long은 18자리 까지 표현이 가능하다
//자릿수가 너무 큰 계산 요구 => 문자열 이용!!!

int main() {
	char* wholeNumber;
	int count = 1, sum = 0, index = 0;

	cin >> count;
	wholeNumber = new char[count];
	cin	>> wholeNumber;
	while (index < count)
		sum += (int)(wholeNumber[index++] - '0');	
					//char형의 한 자릿수를 int형 한 자릿수로 바꾸고 싶을 때 방법
	cout << sum;
	return 0;
}

/*
* //method 2
	int n, x, s = 0;
	scanf("%d", &n);
	for (; n--;) {
		scanf("%1d", &x);	//1자릿수의 정수형 입력받아서 바로 더하기 방식
		s += x;
	}
	printf("%d", s);
*/