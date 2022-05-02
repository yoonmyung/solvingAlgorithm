#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// 다른 사람의 풀이

struct cmp { // priority_queue에 특수한 비교함수 적용시 이렇게 함수가 아닌 자료형으로 넣어줘야함
    bool operator()(vector<int> a, vector<int> b) {
        return a[1] > b[1]; // 최소힙
    }
};

int solution(vector<vector<int>> jobs) {
    int answer = 0, job = 0, time = 0;
    priority_queue<vector<int>, vector<vector<int>>, cmp> disk; // multimap으로 시도했으나, 비교함수를 적용할 수 없어서 우선순위큐로 변경

    sort(jobs.begin(), jobs.end());
    while (job < jobs.size() || !disk.empty()) 
    {
        if (jobs.size() > job && time >= jobs[job][0]) 
        {
            disk.push(jobs[job++]);
            continue;	// 동일 시간에 여러 작업이 동시에 들어올 수 있으므로 continue가 필요함
        }

        if (!disk.empty()) 
        {
            time += disk.top()[1];
            answer += time - disk.top()[0];
            disk.pop();
        }
        else
        { // 디스크에는 작업이 아직 들어오지 않았지만, 시간 경과 후 들어올 작업이 남아있는 경우
            time = jobs[job][0];
        }
    }

    return answer / jobs.size();
}