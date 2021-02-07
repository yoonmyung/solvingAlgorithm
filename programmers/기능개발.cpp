#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    stack<int> stack;

    for (int i = progresses.size() - 1; i >= 0; i--) {
        stack.push(
            (100 - progresses[i]) / speeds[i] + 
            ((100 - progresses[i]) % speeds[i] ? 1 : 0)
        );
    }
    while (!stack.empty()) {
        int job = stack.top();
        int jobs = 1;
        stack.pop();
        while (!stack.empty() && stack.top() <= job) {
            jobs++;
            stack.pop();
        }
        answer.push_back(jobs);
     }
    return answer;
}