#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//sort(n, m) => index (n) ~ index (m - 1)
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> extractedArray;

    for(vector<int> command : commands) {
        for(int i = command[0] - 1; i < command[1]; i++)
            extractedArray.push_back(array[i]);
        sort(extractedArray.begin(), extractedArray.end());
        answer.push_back(extractedArray[command[2] - 1]);
        extractedArray.clear();
        /*
         * <<way to optimize 12~16 line>>
         * sort(extractedArray.begin() + command[0] - 1, extractedArray.begin() + command[1]);
         * answer.push_back(temp[command[0]+command[2] - 2]);
         */
    }
    return answer;
}