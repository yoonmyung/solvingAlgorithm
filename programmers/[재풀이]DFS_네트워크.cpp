// 다른 사람 풀이 (DFS 정석)
#include <string>
#include <vector>

using namespace std;

void DFS(int from, int n, vector<int> &visited, vector<vector<int>> &computers) {

    for (int i = 0; i < n; i++) {
        if (from != i && computers[from][i] == 1 && visited[i] == 0) {
            visited[i] = 1;
            DFS(i, n, visited, computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {

    int network = 0;
    vector<int> visited(n, 0); // vector 초기화 하는 법

    for (int i = 0; i <n; i++) {
        if (visited[i] == 1) {
            continue;
        }

        network++;
        visited[i] = 1;

        DFS(i, n, visited, computers);
    }

    return network;
}



// 내 풀이 (DFS에 뭔가 더 섞임)
vector<int> checked;
vector<int> computerstack;

void dfs(vector<vector<int>> computers, int n)
{
    if (computerstack.empty())
    {
        return;
    }
    
    int computer = computerstack.back();
    
    computerstack.pop_back();
    checked[computer] = 1;
    for (int i = 0; i < n; i++)
    {
        if (computers[computer][i] == 1 && checked[i] != 1)
        {
            computerstack.push_back(i);
        }
    }
    
    dfs(computers, n);
}

int solution(int n, vector<vector<int>> computers) 
{
    int answer = n;
    
    for(int i = 0; i < n; i++)
    {
        checked.push_back(0);
    }
    
    for(int i = 0; i < n; i++)
    {
        if (checked[i] == 0)
        {
            checked[i] = 1;
            for(int j = 0; j < n; j++)
            {
                if (computers[i][j] == 1 && checked[j] != 1)
                {
                    computerstack.push_back(j);
                }
            }
            
            dfs(computers, n);
        }
        
        int connectedNodes = 0;
        
        for (int j = 0; j < n; j++)
        {
            if (checked[j] == 1)
            {
                connectedNodes++;
                checked[j] = -1;
            }
        }
        
        if (connectedNodes > 1)
        {
            connectedNodes--;
            answer = answer - connectedNodes; 
            // 노드 여러 개로 구성된 네트워크를 1개의 노드로 취급함
        }
    }
    
    return answer;
}