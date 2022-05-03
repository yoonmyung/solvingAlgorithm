#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool cmp(const string &a, const string &b) { //string으로 비교 수행 (sort함수 활용법)
	return a + b > b + a;
}

string solution(vector<int> numbers) {
	string answer = "";
	vector<string> tmp;
    
	for (int i = 0; i < numbers.size(); i++) tmp.push_back(to_string(numbers[i]));
    
	sort(tmp.begin(), tmp.end(), cmp); //cmp 함수 기준으로 정렬 수행
    
	for (int i = 0; i < tmp.size(); i++) answer += tmp[i]; 
    
	if (answer[0] == '0') return "0"; //answer[0]가 0이면 가장 큰 수가 0이라는 뜻이므로 0리턴
    
	return answer;
}


// 내가 쓴 답 (일부 테스트케이스 오답)
// 인덱스 i일때 최댓값인 문자열을 answer에 붙이는 방식 ex) [9, 5, 30] 의 경우 인덱스 0일때 ['9', '5', '3']이고 이때 9가 가장 크므로 9를 answer에 붙임
// 3, 30, 34 를 비교할 때는 인덱스 0일땐 최댓값인 수가 3개이므로 인덱스 1일때(digit++) 다시 비교함 
// 이때 3처럼 해당 인덱스에 문자를 갖고 있지 않은 수는 해당 인덱스 - 1 자리의 수를 붙임 ex) 30+3보다 3+30이 큰것처럼, 3+34보다 3+34가 큰것처럼 3은 최소 3보다 큰 일의자리수를 가진 수만 앞으로 보냄
// 그럼 [ '3', '0', '4' ]가 되고 34가 answer에 붙게 됨

vector<string> getmaxnum(vector<string> nums, int digit)
{
    vector<string> maxnumbers;
    int maxdigit = -1;
        
    for(int i = 0; i < nums.size(); i++)
    {
        if (digit == nums[i].size()) // 3처럼 인덱스 1(digit=1)이 없는데 비교해야 할 경우
        {
            nums[i] += nums[i][digit-1];
        }
        if (nums[i][digit] - '0' >= maxdigit)
        {
            maxdigit = nums[i][digit] - '0';
            maxnumbers.push_back(nums[i]);
        }
    }
        
    return maxnumbers;
}

string solution(vector<int> numbers) {
    string answer = "";
    int digit = 0;
    int loopcount = 0;
    set<string, greater<string>> numberdigits;
    vector<string> maxnumbers;
    
    for(int i = 0; i < numbers.size(); i++)
    {
        string number = to_string(numbers[i]);
        numberdigits.insert(number);
    }
    loopcount = numberdigits.size();
    for(int i = 0; i < loopcount; i++)
    {
        maxnumbers.assign(numberdigits.begin(), numberdigits.end());
        while(true)
        {
            maxnumbers = getmaxnum(maxnumbers, digit);
            if (maxnumbers.size() == 1)	
            {
                break;
            }
            digit++; // 3, 30, 34처럼 특정 인덱스에서 최댓값이 여러개 나오는 경우
        }
        answer += maxnumbers[0];
        digit = 0;
        numberdigits.erase(maxnumbers[0]);
        maxnumbers.clear();
    }
    
    return answer;
}