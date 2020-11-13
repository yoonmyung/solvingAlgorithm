/*
	전체 설탕주머니 개수가 최소일 때는 설탕의 총량이 5의 배수 혹은 3의 배수일 때이다
	설탕의 총량 15의 배수라 가정하면, 5의 배수로 쳤을 때가 주머니 개수가 더 최소가 되므로
	입력받은 설탕의 총량에 대해서는
	1) 5의 배수인지 체크 -> 5의 배수면 바로 주머니 개수 출력
	2) 5의 배수가 아니면 3kg 짜리 주머니 개수를 하나 증가시키고, 기존 설턍 총량에서 3kg 빼기
	3-1) 남은 설탕 총량이 0이 될 때까지 위 1-2 과정 반복
	3-2) 남은 설탕 총량이 0보다 작으면 -1 출력
*/

//method 2
int N, Cnt;
int main()
{
	scanf("%d", &N);
	while (N % 5 && N >= 0)
		N -= 3, Cnt++;
	if (N < 0)
		printf("-1");
	else
		printf("%d", Cnt + (N / 5));
	return 0;
}

/*
#include <iostream>
using namespace std;
enum { smallSugar = 3 };
enum { bigSugar = 5 };

int main() {
	int totalAmountofSugar, totalCountofBag = -1, smallBag = 0, bigBag;

	cin >> totalAmountofSugar;
	while (smallSugar * smallBag <= totalAmountofSugar) {
		if ((totalAmountofSugar - smallSugar * smallBag) % bigSugar == 0) {
			bigBag =
				(totalAmountofSugar - smallSugar * smallBag) / bigSugar;
			if (totalCountofBag < 0 || totalCountofBag > smallBag + bigBag) {
				totalCountofBag = smallBag + bigBag;
			}
		}
		smallBag++;
	}
	cout << totalCountofBag;
	return 0;
}
*/