#include "stdio.h"
#include <queue>
#include <vector>
using namespace std;

int main() {
	int countofCards, countofRotate = 0, index = 0;
	vector<queue<int>> listofPiles;

	scanf_s("%d", &countofCards);
	for (int i = 0; i < countofCards; i++) {
		queue<int> queue;
		int input;

		scanf_s("%d", &input);
		queue.push(input);
		listofPiles.push_back(queue);
	}
	while (true) {
		if (index + 1 >= listofPiles.size()) {
			if (listofPiles.size() == 1) {
				break;
			}
			else if (countofRotate > 0) {
				index = 0;
				countofRotate = 0;
			}
			else {
				break;
			}
		}
		if (listofPiles[index].front() >= listofPiles[index + 1].back()) {
			countofRotate++;
			while (!listofPiles[index].empty()) {
				listofPiles[index + 1].push(listofPiles[index].front());
				listofPiles[index].pop();
			}
			listofPiles.erase(listofPiles.begin() + index);
		}
		index++;
	}
	printf("%d", listofPiles.size());

	return 0;
}