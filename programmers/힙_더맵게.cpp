#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    multiset<int> scovilles(scoville.begin(), scoville.end());
    
    while (*scovilles.begin() < K)
    {
        if (scovilles.size() <= 1)
        {
            return -1;
        }
        
        int first = *scovilles.begin();
        int second = *(++scovilles.begin());
        
        scovilles.erase(scovilles.begin());
        scovilles.erase(scovilles.begin());
        scovilles.insert(first + second * 2);
        answer++;
    }
    
    return answer;
}