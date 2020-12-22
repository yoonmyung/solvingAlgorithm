#include <stdio.h>

int main() {
    int A, B;
    double C;
    
    scanf("%d %d", &A, &B);
    C = (double) A / B;
    printf("%.32lf", C);
    
    return 0;
}