#include <string>
#include <vector>

using namespace std;

// 1. DFS로 풀기 (시간초과)
vector<vector<int>> graph;

int DFS(int row, int col, int sum)
{
    if (row == graph.size())
    {
        return sum;
    }
    
    int first = DFS(row+1, col, sum + graph[row][col]);
    int second = DFS(row+1, col+1, sum + graph[row][col]);
    
    if (first > second)
    {
        return first;
    }
    else
    {
        return second;
    }
}

int solution(vector<vector<int>> triangle) {
    int sum = 0;
    
    graph = triangle;
    sum = DFS(0, 0, sum);
    
    return sum;
}

// 2. DP로 풀기
// 다른 사람 풀이
// 루트에서부터 내려오면 최댓값을 찾을 때 DFS를 사용해야 하지만, 리프노드에서부터 올라가면 한번의 순회로 최댓값을 찾을 수 있다. (역발상!!)

int solution(vector<vector<int>> triangle) {
    int answer = 0;

    int largeNumber = 0;

    for (int i = int(triangle.size() - 1); i >= 0; i--) {
        for (int j = 0; j < triangle[i].size() - 1; j++) {
            largeNumber = triangle[i][j] > triangle[i][j + 1] ? triangle[i][j] : triangle[i][j + 1];
            triangle[i - 1][j] += largeNumber;
        }
    }

    answer = triangle[0][0];

    return answer;
}