#include "stdio.h"

struct Cake {
	int x, y, z;
};

int main() {
	Cake a, c;

	scanf_s("%d %d %d\n%d %d %d", &a.x, &a.y, &a.z, &c.x, &c.y, &c.z);
	printf("%d %d %d", c.x - a.z, c.y / a.y, c.z - a.x);

	return 0;
}