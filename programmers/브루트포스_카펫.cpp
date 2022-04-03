#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(const int &a, const int &b)
{
    return a > b;
}

vector<int> solution(int brown, int yellow) {
    vector<int> answer = { 2, 2 };
    int row = 1, column;
// int yellowrow = 1;
    
    brown -= 4;

// 카펫이 정사각형일 때를 따로 나눴는데 굳이 이럴 필요가 없었음
//     while (yellowrow * yellowrow <= yellow)
//     {
//         if (yellowrow * yellowrow == yellow)
//         {
//             answer[0] += brown / 4;
//             answer[1] += brown / 4;

//             return answer;
//         }
        
//         yellowrow++;
//     }
    
    while(true)
    {
        column = brown / 2 - row;
        if (row * column == yellow)
        {
            break;
        }
            
        row++;
    }

    answer[0] += row;
    answer[1] += column;
    sort(answer.begin(), answer.end(), comp);
    
    return answer;
}