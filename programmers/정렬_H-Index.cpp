#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> citations) {
    int h = citations.size();
    int count = 0;
    multiset<int, greater<int>> orderedcitations(citations.begin(), citations.end());
    
    while (h >= 0)
    {
        for(auto i = orderedcitations.begin(); i != orderedcitations.end(); i++)
        {
            if (*i >= h)
            {
                count++;
            }
            if (count >= h)
            {
                return h;
            }
        }
        h--;
        count = 0;
    }
}