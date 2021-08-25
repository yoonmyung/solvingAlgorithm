#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int basket[2][2];
    int tot = 0;
    // int min = 1001;
    // bool minIndex[2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &basket[i][j]);
            // if (min > basket[i][j])
            // {
            //     min = basket[i][j];
            //     minIndex[0] = i;
            //     minIndex[1] = j;
            // }
        }
    }

    // tot = min;
    // tot += basket[!minIndex[0]][!minIndex[1]];
    tot = min(basket[0][0] + basket[1][1], basket[1][0] + basket[0][1]);

    printf("%d", tot);

    return 0;
}