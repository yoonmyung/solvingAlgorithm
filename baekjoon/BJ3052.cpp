#include "stdio.h"
#include <algorithm>
using namespace std;

// set 자료형을 사용하면 굳이 라이브러리 함수를 사용할 필요도, 
// 42 사이즈를 미리 지정할 필요도 없다

//method 2
#include<set>
#include <iostream>
int main(){
	set<int> s;
	int x;
	for(int i =0; i<10; ++i)
		cin >> x, s.insert(x%42);
	cout << s.size();
}

/*
int main() {
	int countingRemainder = 0, number;
	int arrayofRemainder[42] = { 0, };

	for (int i = 1; i <= 10; i++) {
		scanf_s("%d", &number);
		arrayofRemainder[number % 42]++;
	}
	printf("%d", count_if(arrayofRemainder, arrayofRemainder + 42,
		[](int remainder) { return remainder > 0; }));
	return 0;
}
*/