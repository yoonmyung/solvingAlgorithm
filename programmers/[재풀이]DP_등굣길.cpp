#include <string>
#include <vector>

using namespace std;

// 다른 사람 풀이
int dp[101][101];
int solution(int m, int n, vector<vector<int>> puddles) {
    dp[1][1]=1;

    for (int i = 0; i < puddles.size(); i++) {
        dp[puddles[i][1]][puddles[i][0]] = -1;
    }
    for(int i=1; i<=n;i++){
        for(int j=1; j<=m; j++){
            int a=0;
            int b=0;
            if(dp[i][j]==-1)
                continue;
            if(dp[i-1][j]!=-1)
                a= dp[i-1][j];
            if(dp[i][j-1]!=-1)
                b= dp[i][j-1];
            dp[i][j]+=(a+b)%1000000007;
        }
    }

    return dp[n][m];
}


// 내가 짠 코드 (시간초과)
int schoolrow, schoolcol;
long long minroute=1000000007, count=0;

void findroute(vector<vector<long long>> &map, int row, int col, long long score)
{    
    if (row == schoolrow && col == schoolcol)
    {
        if (minroute > score)
        {
            minroute = score;
            count = 1;
        }
        else
        {
            count %= 1000000007;
            count++;
        }
    }
    else
    {
        if (map[row][col] >= 0)
        {
            map[row][col] = score % 1000000007;
            if (col+1 < map[0].size())
            {
                findroute(map, row, col+1, map[row][col]+1);
            }

            if (row+1 < map.size())
            {
                findroute(map, row+1, col, map[row][col]+1);
            }
        }
    }
}

int solution(int m, int n, vector<vector<int>> puddles) {
    vector<vector<long long>> map(n, vector<long long>(m, 0));
    
    schoolrow = n-1;
    schoolcol = m-1;
    if (puddles.size() > 0)
    {
        for(auto it = puddles.begin(); it != puddles.end(); it++)
        {
            vector<int> puddle = *it;

            map[puddle[1]-1][puddle[0]-1] = -1;
        }
    }
    
    findroute(map, 0, 0, 0);
    
    return count % 1000000007;
}