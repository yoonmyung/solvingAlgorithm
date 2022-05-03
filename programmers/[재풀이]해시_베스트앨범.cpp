#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string, int> musics;
    map<string, map<int, int>> musiclist;

    for (int i = 0; i < genres.size(); i++) 
    {
        musics[genres[i]] += plays[i];
        musiclist[genres[i]][i] = plays[i];
    }

    while (musics.size() > 0) 
    {
        string genre{};
        int max{0};
        
        //장르중에서 제일높은것 찾기
        for (auto music : musics)
        {
            if (max < music.second)
            {
                max = music.second;
                genre = music.first;
            }
        }
        
        //2곡을 넣어야하므로 2번반복
        for (int i = 0; i < 2; i++)
        {
            int value = 0, index = -1;
            //노래중에서 제일높은것 찾기
            for (auto ml : musiclist[genre]) 
            {
                if (value < ml.second) 
                {
                    value = ml.second;
                    index = ml.first;
                }
            }
            //만약 노래가 없다면 반복문 탈출
            if (index == -1)    break;
            
            answer.push_back(index);
            musiclist[genre].erase(index);
        }
        // 장르삭제
        musics.erase(genre);
    }
        
    return answer;
}

// 내 풀이 (오답, 장르 내에서 재생 횟수가 같은 노래 중에서는 고유 번호가 낮은 노래를 먼저 수록합니다. 이 조건을 만족하지 못함)
vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    auto gi = genres.begin();
    auto pi = plays.begin();
    map<string, int> genremap;
    multimap<int, int, greater<int>> musicmap;
    int max = 0;
    string maxgenre = "";
    
    while(gi != genres.end())
    {
        genremap[*gi] += *pi;
        musicmap.insert(make_pair(*pi, gi - genres.begin()));
        gi++;
        pi++;
    }
    for(auto i = genremap.begin(); i != genremap.end(); i++)
    {
        if (i->second > max)
        {
            max = i->second;
            maxgenre = i->first;
        }
    }
    for(auto i = musicmap.begin(); i != musicmap.end(); i++)
    {
        if (genres[i->second].compare(maxgenre) == 0 && answer.size() < 4)
        {
            answer.push_back(i->second);
            i->second = -1;
        }
    }
    for(auto i = musicmap.begin(); i != musicmap.end(); i++)
    {
        if (i->second >= 0 && answer.size() < 4)
        {
            answer.push_back(i->second);
            i->second = -1;
        }
    }
    return answer;
}