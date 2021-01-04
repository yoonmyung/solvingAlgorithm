#include "stdio.h"
#include <queue>
using namespace std;

int main() {
	int count;
	queue<int> queue;

	scanf_s("%d", &count);
	for (int i = 1; i <= count; i++) {
		queue.push(i);
	}
	while (!queue.empty()) {
		printf("%d ", queue.front());
		queue.pop();
		if (!queue.empty()) {
			int card = queue.front();
			queue.pop();
			queue.push(card);
		}
	}

	return 0;
}