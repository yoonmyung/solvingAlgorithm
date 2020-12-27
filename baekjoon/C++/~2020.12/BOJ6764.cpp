#include "stdio.h"

int main() {
	int depth[4];

	scanf_s("%d\n%d\n%d\n%d", &depth[0], &depth[1], &depth[2], &depth[3]);
	if (depth[0] + depth[1] + depth[2] + depth[3] == 4 * depth[0]) {
		printf("Fish At Constant Depth");
	}
	else {
		if (depth[0] < depth[1] && depth[1] < depth[2] && depth[2] < depth[3]) {
			printf("Fish Rising");
		}
		else if (depth[0] > depth[1] && depth[1] > depth[2] && depth[2] > depth[3]) {
			printf("Fish Diving");
		}
		else {
			printf("No Fish");
		}
	}

	return 0;
}