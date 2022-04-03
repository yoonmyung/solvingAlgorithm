#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> suphozas = {{1,2,3,4,5}, {2,1,2,3,2,4,2,5}, {3,3,1,1,2,2,4,4,5,5}};
    map<int, int> scores = { make_pair(0, 0), make_pair(1, 0), make_pair(2, 0)};
    int maxscore = -1;
    
    for(int i = 0; i < answers.size(); i++)
    {
        for(int j = 0; j < suphozas.size(); j++)
        {
            int answer = i % suphozas[j].size();

            if (answers[i] == suphozas[j][answer])
            {
                scores[j]++;
            }
        }
    }
    for(auto it : scores)
    {
        if (maxscore < it.second)
        {
            maxscore = it.second;
        }
    }
    for(auto it : scores)
    {
        if (maxscore <= it.second)
        {
            answer.push_back(it.first + 1);
        }
    }
    
    return answer;
}

// 다른 풀이(#include<algorithm>의 max_element() 사용)
vector<int> solution(vector<int> answers) {
    vector<int> one = {1,2,3,4,5};
    vector<int> two = {2,1,2,3,2,4,2,5};
    vector<int> thr = {3,3,1,1,2,2,4,4,5,5};
    vector<int> answer;
    vector<int> they(3);
    for(int i=0; ianswers.size(); i++) {
        if(answers[i] == one[i%one.size()]) they[0]++;
        if(answers[i] == two[i%two.size()]) they[1]++;
        if(answers[i] == thr[i%thr.size()]) they[2]++;
    }
    int they_max = max_element(they.begin(),they.end()); // vector에서 최댓값 구하기
    for(int i = 0; i 3; i++) {
        if(they[i] == they_max) answer.push_back(i+1);
    }
    return answer;
}