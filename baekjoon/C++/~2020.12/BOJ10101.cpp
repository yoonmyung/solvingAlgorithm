#include "stdio.h"
#include "algorithm"
using namespace std;

int main() {
	int angle[3], tot = 0;

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &angle[i]);
		tot += angle[i];
	}
	sort(angle, angle + 3);
	if (tot == 180) {
		if (tot == 3 * angle[0]) {
			printf("Equilateral");
		}
		else if (!(angle[1] - angle[0]) || !(angle[1] - angle[2])) {
			printf("Isosceles");
		}
		else {
			printf("Scalene");
		}
	}
	else {
		printf("Error");
	}

	return 0;
}