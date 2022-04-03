#include <string>
#include <vector>
#include <deque>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) 
{
    int answer = 0, currentweight = 0, currentcount = 0, i = 0;
    deque<int> bridge;
    
    for(i=0; i < bridge_length; i++)
    {
        bridge.push_back(0);
    }
    
    i=0;
    while(i + 1 <= truck_weights.size())
    {
        answer++;
        if (bridge.front() > 0)
        {
            currentweight -= bridge.front();
            currentcount--;
        }

        bridge.pop_front();
        if (currentcount < bridge_length && currentweight + truck_weights[i] <= weight)
        {
            currentweight += truck_weights[i];
            bridge.push_back(truck_weights[i++]);
            currentcount++;
        }
        
        if (bridge.size() < bridge_length)
        {
            bridge.push_back(0);
        }
    }
    if (currentcount > 0)
    {
        answer += bridge_length;
    }
    
    return answer;
}