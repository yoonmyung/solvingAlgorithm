#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> leftDays;
    int count = 0;
    int checkIsDone = 0;
    
    for(int i = 0; i < progresses.size(); i++)
    {
        int plusOne;
        if ((100 - progresses[i]) % speeds[i] > 0)
        {
            plusOne = 1;
        }
        else
        {
            plusOne = 0;
        }
        leftDays.push_back((100 - progresses[i]) / speeds[i] + plusOne);
    }
    for(int i = 0; i < leftDays.size(); i += count)
    {
        count = 0;
        if (checkIsDone == leftDays.size())
        {
            break;
        }
        for(int j = i; j < leftDays.size(); j++)
        {
            if (leftDays[j] <= leftDays[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        answer.push_back(count);
        checkIsDone += count;
    }
    
    return answer;
}