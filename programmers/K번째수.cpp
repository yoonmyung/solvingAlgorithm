#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    /*
    *   commands[n]은 n개의 입력을 의미, 각 입력(command)에 대해서 3가지 input이 존재함
    *   <<command의 형식>>
    *   command [0] = i(시작 번째)
    *   command [1] = j(끝나는 번째)
    *   command [2] = k(정렬 후 리턴할 번째)
    */
    vector<int> answer;
    vector<int> extractedArray;

    for (vector<int> command : commands) {
        for (int i = command[0] - 1; i < command[1]; i++)
            extractedArray.push_back(array[i]);
        sort(extractedArray.begin(), extractedArray.end());
        answer.push_back(extractedArray[command[2] - 1]);
        extractedArray.clear();
    }
    return answer;
}