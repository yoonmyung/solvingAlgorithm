#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;
    set<int> lostSet(lost.begin(), lost.end());
    set<int> reserveSet(reserve.begin(), reserve.end());
    // .find함수를 사용하기 위해 set에 복사
    
    sort(reserve.begin(), reserve.end());
    // 연속된 숫자의 학생끼리만 체육복을 빌려줄 수 있으므로 정렬
    for(int i = 0; i < reserve.size(); i++)
    {
        if (lostSet.find(reserve[i]) == lostSet.end())
        {
            if (lostSet.find(reserve[i] - 1) != lostSet.end() && reserveSet.find(reserve[i] - 1) == reserveSet.end())
            {
                // 내 앞사람이 체육복을 도난당했지만 여분체육복이 없는 경우 (아래 조건문은 내 뒷사람)
                lostSet.erase(lostSet.find(reserve[i] - 1));
            }
            else if (lostSet.find(reserve[i] + 1) != lostSet.end() && reserveSet.find(reserve[i] + 1) == reserveSet.end())
            {
                lostSet.erase(lostSet.find(reserve[i] + 1));
            }
        }
        else
        {
            // 내가 체육복을 도난당했지만 여분체육복이 있음
            lostSet.erase(lostSet.find(reserve[i]));
        }
    }
    
    for (auto i = lostSet.begin(); i != lostSet.end(); i++)
    {
        answer--;
    }
    
    return answer;
}