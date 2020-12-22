#include "iostream"
#include "algorithm"
using namespace std;

//sort 함수 사용하면 바로 정렬 됨!!
int main() {
	int dice[3], max = -10, middle = -1, min = 70;

	//solution 2
	cin >> dice[0] >> dice[1] >> dice[2];
	sort(dice, dice + 3);
	if (dice[0] == dice[2]) {
		//모두 같은 경우
	}
	else if (dice[1] == dice[0] && dice[1] == dice[2]) {
		//두 개만 같은 경우
	}
	else {
		//3개 모두 다른 경우
	}

	/*
	for (int i = 0; i < 3; i++) {
		cin >> dice[i];
		if (max / 10 < dice[i]) {
			int term = max % 10;
			max -= term;
			max += i;
			max -= max / 10 * 10;
			max += dice[i] * 10;
		}
		if (min / 10 > dice[i]) {
			int term = min % 10;
			min -= term;
			min += i;
			min -= min / 10 * 10;
			min += dice[i] * 10;
		}
	}
	middle = 3 - max % 10 - min % 10;
	if (3 * dice[0] == dice[0] + dice[1] + dice[2]) {
		printf("%d", 10000 + dice[0] * 1000);
	}
	else if (dice[middle] == dice[max % 10] || dice[middle] == dice[min % 10]) {
		printf("%d", 1000 + dice[middle] * 100);
	}
	else {
		printf("%d", max / 10 * 100);
	}
	*/

	return 0;
}