#include <stdio.h>
using namespace std;

int main() {
    int N, pieces = 2;
    
    scanf("%d", &N);
    while (N > 1) {
        pieces = pieces + (N / 2) + 1;
        N--;
    }
    printf("%d", pieces);

    return 0;
}