#include "stdio.h"
#include "algorithm"
using namespace std;

int main() {
    int nums[3];
    
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
    sort(nums, nums + 3);
    printf("%d %d %d", nums[0], nums[1], nums[2]);
    
    return 0;
}