#include <string>
#include <vector>
#include <map>

using namespace std;

// 스택큐 문제인데 스택큐랑 관련이 있나? 오히려 슬라이딩윈도우에 가까운 유형같음
vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int count = 0;
    
    for(int i = 0; i < prices.size(); i++)
    {
        for(int j = i+1; j < prices.size(); j++)
        {
            count++;
            if (prices[i] - prices[j] > 0)
            {
                break;
            }
        }
        answer.push_back(count);
        count = 0;
    }
    
    return answer;
}