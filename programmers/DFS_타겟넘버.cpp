#include <string>
#include <vector>

using namespace std;

vector<int> nums;
int targetNum;
int answer = 0;

void addNode(int index, int sum)
{
    if (index == nums.size() - 1)
    {
        if (sum == targetNum)
        {
            answer++;
        }
        
        return;
    }
    
    addNode(index + 1, sum + nums[index + 1]);
    addNode(index + 1, sum + (nums[index + 1] * -1));
}

int solution(vector<int> numbers, int target) {    
    nums = numbers;
    targetNum = target;
    addNode(0, numbers[0]);
    addNode(0, numbers[0] * -1);
    
    return answer;
}