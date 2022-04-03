#include <string>
#include <vector>
#include <deque>

using namespace std;

int getFirst(deque<pair<int, int>> printer)
{
    int max = 0;
    
    for(int i = 0; i < printer.size(); i++)
    {
        if (max < printer[i].first)
        {
            max = printer[i].first;
        }
    }    
    
    return max;
}

int solution(vector<int> priorities, int location) {
    int answer = 1;
    deque<pair<int, int>> printer;
    vector<int> orderedprinter;
    int first = 0;
    
    for(int i = 0; i < priorities.size(); i++)
    {
        printer.push_back(make_pair(priorities[i], i));
    }
    while (!printer.empty())
    {
        first = getFirst(printer);
        pair<int, int> print = printer.front();
        printer.pop_front();
        if (print.first < first)
        {
            printer.push_back(print);
        }
        else
        {
            orderedprinter.push_back(print.second); 
            // 인쇄된 문서(현 프린터 상태에서 가장 우선순위가 높았던 문서)는 정렬이 완료됐으므로 정렬대상에서 제외시킨다
        }
    }
    for(int i = 0; i < orderedprinter.size(); i++)
    {
        if (orderedprinter[i] == location)
        {
            answer = i + 1;
        }
    }

    return answer;
}