#include <stdio.h>
using namespace std;

#define A 300
#define B 60
#define C 10

int main()
{
    int T;
    int result[3] = {0, 0, 0};
    scanf("%d", &T);

    if (T >= A) {
        // printf("a");
        result[0] = T / A;
        T %= A;
    }
    if (T >= B) {
        // printf("b");
        result[1] = T / B;
        T %= B;
    }
    if (T >= C) {
        // printf("c");        
        result[2] = T / C;
        T %= C;
    }
    if (T != 0) {
        printf("-1");
    }
    else {
        printf("%d %d %d", result[0], result[1], result[2]);
    }

    return 0;
}