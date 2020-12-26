#include "stdio.h"
#include "stdlib.h"
using namespace std;

//방정식 간단화
int main() {
    int sum, sub, MK;

    scanf_s("%d %d", &sum, &sub);
    //solution 2
    if (sum < sub || (sum + sub) % 2 == 1) {
        printf("-1");
    }
    else {
        printf("%d %d", (sum + sub) / 2, (sum - sub) / 2);
    }
    /*
    MK = (sum + sub) / 2;
    if (sum >= sub && abs(sum - MK) == abs(sub - MK)) {
        if (MK > sum - MK) {
            printf("%d %d", MK, abs(sum - MK));
        }
        else {
            printf("%d %d", abs(sum - MK), MK);
        }
    }
    else {
        printf("-1");
    }
    */
    return 0;
}