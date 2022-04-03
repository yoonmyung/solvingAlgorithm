#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for(int i = 0; i < commands.size(); i++)
    {
        int begin = commands[i][0] - 1;
        int end = commands[i][1];
        int count = 1;
        vector<int> sortedarray; 
        // 중복값을 여러번 넣기 위해 multiset으로 받아야 함
        // vector -> set
        multiset<int> sorting(array.begin() + begin, array.begin() + end);

       // set -> vector
        sortedarray.assign(sorting.begin(), sorting.end());
        answer.push_back(sortedarray[commands[i][2] - 1]);
    }
    
    return answer;
}