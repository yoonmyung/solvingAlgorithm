// 순열: nPr, 순서있게 배열
// C++에서 제공하는 next_permutation 함수를 사용할 수 있음 
// 다만 배열 전체뿐만 아니라 배열 중 일부 원소만으로도 순열을 추출해야 하기 때문에 while문 안에 for문이 한번 더 들어갔다

#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;

bool isSosu(int num)
{
    if (num < 2)
    {
        return false;
    }
    
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num%i == 0)
        {
            return false;
        }
    }
    
    return true;
}

int solution(string numbers) 
{
    set<int> sosus;
    
    sort(numbers.begin(), numbers.end());
    do
    {
        for (int i = 1; i <= numbers.size(); i++)
        {
            int intNum = stoi(numbers.substr(0, i));

            if (isSosu(intNum))
            {
                sosus.insert(intNum);
            }
        }
    } while (next_permutation(numbers.begin(), numbers.end()));
    
    return sosus.size();
}