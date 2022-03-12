#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> types;
    
    for(int i = 0; i < clothes.size(); i++)
    {
        types[clothes[i][1]]++;
    }
    for(auto i = types.begin(); i != types.end(); i++)
    {
        answer *= (i->second + 1);
        // i->second는 여기서 (i->second)C1 (조합)을 의미하는 것
        // +1은 해당 종류의 옷을 선택하지 않았을 때에 해당됨
    }
    answer--;
    // 모든 옷을 고르지 않았을 경우는 제외해야 하기 때문
    
    return answer;
}

// 내 풀이 (옷 종류 1개 선택, 2개 선택, 3개 선택, ... 이렇게 하나씩 따짐. 계산해보면 결국 이것도 오답)
int wrong_answer(vector<vector<string>> clothes) {
    int answer = 0;
    int max = 0;
    int otherTypes = 0;
    map<string, int> types;
    string maxType = "";
    
    for(int i = 0; i < clothes.size(); i++)
    {
        types[clothes[i][1]]++;
    }

    // 1개씩 매치
    answer += clothes.size();

    // 2개씩 매치
    if (types.size() >= 2)
    {
        for(auto i=types.begin(); i!=types.end(); i++)
        {
            if (i->second > max)
            {
                max = i->second;
                maxType = i->first;
            }
            printf("%d ", i->second);
        }
        for(auto i=types.begin(); i!=types.end(); i++)
        {
            if (maxType.compare(i->first) != 0)
            {
                otherTypes += i->second;
            }
        }
        answer += (max * otherTypes);
    }

    // 3개씩 매치
    if (types.size() >= 3)
    {
        int temp = 1;
        
        for(auto i=types.begin(); i!=types.end(); i++)
        {
            string type = i->first;

            for(auto j=types.begin(); j!=types.end(); j++)
            {
                if (j->first.compare(type) != 0)
                {
                    temp *= j->second;
                }
            }
            answer += temp;
            temp = 1;
        }
    }

    // 4개 다 매치
    if (types.size() >= 4)
    {
        int temp = 1;
        for(auto i=types.begin(); i!=types.end(); i++)
        {
            temp *= i->second;
        }
        answer += temp;
    }
    
    return answer;
}