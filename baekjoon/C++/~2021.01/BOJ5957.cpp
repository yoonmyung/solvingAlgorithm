#include "stdio.h"
#include <stack>
using namespace std;
#define washing 1
#define drying 2

int main() {
	int N, task, numberofDishes;
	stack<int> stack, washedStack, driedStack;

	scanf_s("%d", &N);
	for (int i = N; i > 0; i--) {
		stack.push(i);
	}
	while (true) {
		scanf_s("%d %d", &task, &numberofDishes);
		//washing dish 작업은 stack(wash, dry 전부 되지 않은 접시들)이 빈 순간 동시에 끝난다
		if (!stack.empty() && task == washing) {
			for (int i = 0; i < numberofDishes; i++) {
				washedStack.push(stack.top());
				stack.pop();
			}
		}
		else {
			for (int i = 0; i < numberofDishes; i++) {
				driedStack.push(washedStack.top());
				washedStack.pop();
			}
		}
		//drying dish 개수가 남은 접시 개수만큼 한 번에 똑 떨어지는 경우가 아닐 수도 있으니
		//driedStack이 꽉 찰 때까지 while문이 돌아야 함
		if (washedStack.empty() && driedStack.size() == N) {
			break;
		}
	}
	while (!driedStack.empty()) {
		printf("%d\n", driedStack.top());
		driedStack.pop();
	}

	return 0;
}