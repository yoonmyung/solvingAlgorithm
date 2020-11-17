#include "stdio.h"
#include <algorithm>
using namespace std;

//크기 5짜리 배열 하나에 버거와 음료수 값을 모두 입력받은 뒤
//min() 함수로 쪼개서 값을 받아와도 됨

int main() {
	int burgers[3], beverages[2];

	for (int i = 0; i < 3; i++)
		scanf_s("%d", &burgers[i]);
	for (int i = 0; i < 2; i++)
		scanf_s("%d", &beverages[i]);
	printf("%d", 
		*(min_element(burgers, burgers + 3)) + *(min_element(beverages, beverages + 2)) - 50);
		//min_element 함수는 포인터(주소값)를 리턴함 주의
	return 0;
}

//method 2
/*
int a[5];
int main(){
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("%d\n",min({a[0],a[1],a[2]}) + min(a[3],a[4]) - 50);
}
*/