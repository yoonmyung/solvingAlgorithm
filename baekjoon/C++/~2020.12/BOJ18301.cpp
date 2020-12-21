#include "stdio.h"

int main() {
	int n1, n2, n12;

	scanf_s("%d %d %d", &n1, &n2, &n12);
	printf("%d", (int)((++n1) * (++n2) / (++n12) - 1));
	//따로 형변환 안 해도 정수로 출력되기 때문에 알아서 소수점 뒷자리는 버림 된다.

	return 0;
}