#include <string>
#include <vector>
 
using namespace std;
 
// 다른 사람의 풀이
// 출처: https://yabmoons.tistory.com/477 [얍문's Coding World..]
int Bigger(int A, int B) { if (A > B) return A; return B; }
 
int solution(vector<int> money)
{
    vector<int> DP(money.size());
    vector<int>DP2(money.size());

    // 인덱스 0의 집을 방문한 경우
    DP[0] = money[0];
    DP[1] = DP[0];
    for (int i = 2; i < money.size()-1; i++)
    {
        DP[i] = Bigger(DP[i - 2] + money[i], DP[i - 1]);
    }

    // 인덱스 0의 집을 방문하지 않은 경우
    DP2[0] = 0;
    DP2[1] = money[1];
    for (int i = 2; i <= money.size()-1; i++)
    {
        DP2[i] = Bigger(DP2[i - 2] + money[i], DP2[i - 1]);
    }
    
    return Bigger(DP[money.size() - 2], DP2[money.size()-1]);
}


// 내가 푼 풀이(시간초과..)
int solution(vector<int> money) {
    int answer = 0;
    int tot = 0;
    vector<int> copiedmoney(money);
    
    for(int i = 0; i < money.size(); i++) {        
        for(int j = i; j < money.size() * 2; j++) {
            tot += copiedmoney[j % money.size()];
            if (copiedmoney[j % money.size()] > 0) {
                if (j % money.size() == 0) {
                    copiedmoney[money.size()-1] = 0;
                }
                else {
                    copiedmoney[(j % money.size())-1] = 0;
                }
                
                copiedmoney[(j % money.size()+1) % money.size()] = 0;
                copiedmoney[j % money.size()] = 0;
            }
        }

        if (answer < tot) {
            answer = tot;
        }
        
        tot = 0;
        copiedmoney = money;
    }
    
    return answer;
}