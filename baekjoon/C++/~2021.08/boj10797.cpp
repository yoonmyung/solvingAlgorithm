#include <stdio.h>
using namespace std;

int main() {
    int date, result = 0;
    // int cars[5];

    scanf("%d", &date);
    
    // for (int i = 0; i < 5; i++) {
    //     scanf("%d", &cars[i]);
    //     if (cars[i] == date) {
    //         result++;
    //     }
    // }

    int Cars;   
    // 배열 크기 제한이 없어 ctrl+c 입력하면 결과 출력하는 입력방식
	while (~scanf("%d",&Cars)) {
		if(date == Cars) {
            result++;
        }
    }
    printf("%d", result);

    return 0;
}