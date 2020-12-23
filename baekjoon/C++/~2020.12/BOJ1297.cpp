#include "stdio.h"
#include "cmath"
using namespace std;

int main() {
	int a, b, L;
	double x, c; //루트값이 나오기 때문에 꼭 실수형 변수로 받아야 정확한 값이 나온다.

	scanf_s("%d %d %d", &L, &a, &b);
	c = sqrt(a * a + b * b); //가로, 세로 비율에 비례하는 대각선의 비율
	x = L / c;	//a^2*x^2 + b^2*x^2 = c^2*x^2에 해당하는 x 구하기 (L = c * x 이므로)
	printf("%d %d\n", (int)(a * x), (int)(b * x));

	return 0;
}
