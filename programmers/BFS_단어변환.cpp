#include <string>
#include <vector>
#include <queue>

using namespace std;

int visited[50];

int possible(string a, string b)
{
    int i;
    int cnt = 0;

    for(i=0;i<a.length();i++)
    {
        if(a[i] != b[i]) cnt++;
    }

    if(cnt==1) return 1;
    else return 0;
}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    queue<pair<string,int>> Q;
    int i;
    string temp;
    int num;

    Q.push(make_pair(begin,0));
    while(!Q.empty())
    {
        temp = Q.front().first;
        num = Q.front().second;
        Q.pop();

        if(temp.compare(target) == 0)
        {
            answer = num;
            break;
        }

        for(i=0;i<words.size();i++)
        {
            if(visited[i]) continue;
            if(possible(temp, words[i]))
            {
                visited[i] = 1;
                Q.push(make_pair(words[i],num+1));
            }
        }
    }

    return answer;
}





// 내 풀이: 함수명은 BFS인데 푼 방식은 DFS

#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool isValidword = false;

void BFS(string &begin, string &target, map<string, int> &words, vector<int> &counts, int cnt)
{
    if (begin.compare(target) == 0)
    {
        isValidword = true;
        counts.push_back(cnt);
    }
    
    cnt++;
    for (auto word = words.begin(); word != words.end(); word++)
    {
        int sameCount = 0;
        
        if (word->second > 0)
        {
            continue;
        }
        
        for (int i = 0; i < word->first.length(); i++)
        {
            if (word->first[i] == begin[i])
            {
                sameCount++;
            }
        }
        
        if (sameCount == begin.length() - 1)
        {
            word->second++;
            string beginString = word->first;
            BFS(beginString, target, words, counts, cnt);
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    map<string, int> hashWords;
    vector<int> counts;

    sort(words.begin(), words.end());
    for (int i = 0; i < words.size(); i++)
    {
        hashWords[words[i]] = 0;
    }
    
    BFS(begin, target, hashWords, counts, 0);
    if (isValidword)
    {
        sort(counts.begin(), counts.end());
        return counts[0];
    }
    else
    {
        return 0;
    }
}