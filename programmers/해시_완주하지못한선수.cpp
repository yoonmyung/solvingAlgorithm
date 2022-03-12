#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> table;
    
    for(auto i = participant.begin(); i != participant.end(); i++)
    {
        if (table.find(*i) != table.end())
        {
            table[*i]++;
        }
        else
        {
            table[*i] = 1;
        }
        // 위의 if/else문은 table[*i]++; 한 줄로 요약 가능
    }
    for(auto i = completion.begin(); i != completion.end(); i++)
    {
        table[*i]--;
    }
    for(auto i = table.begin(); i != table.end(); i++)
    {
        if (i->second > 0)
        {
            answer = i->first;
            break;
        }
    }
    
    return answer;
}