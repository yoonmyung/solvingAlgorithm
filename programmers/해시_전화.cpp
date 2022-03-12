#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 1. 정렬로 풀기

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());
    for(int i = 0; i < phone_book.size() - 1; i++) {
        if(phone_book[i+1].substr(0, phone_book[i].size()).compare(phone_book[i]) == 0)
            return false;
    }
    return true;
}

// 2. 해시로 풀기

bool solution(vector<string> phone_book) {
    bool answer = true;
    map<string, int> phone;
    
    for (int i = 0; i < phone_book.size(); i++) 
    {
        phone[phone_book[i]] = 1; 
    }
    // 2. 모든 전화번호의 substring이 HashMap에 존재하는지 확인한다. 
    // ex) "12345" 전화번호면, 해시맵에 "1", "12", "123", "1234", "12345" 가 존재하는지 확인하는것
    for (int i = 0; i < phone_book.size(); i++) 
    { 
        for (int j = 0; j < phone_book[i].size() - 1; j++) 
        { 
            string phone_number = phone_book[i].substr(0, j + 1); 
            if (phone[phone_number])
            {
                answer = false; 
                return answer;
            }
        } 
    } 
    // 3. 여기까지 오면 접두어가 없다는 것이다. 
    answer = true;
    return answer;
}