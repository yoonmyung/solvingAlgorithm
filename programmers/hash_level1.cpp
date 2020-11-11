#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

/*
 * 또 다른 접근 방식
 * 1. participant와 completion을 정렬 후 sort(participant.begin(), participant.end())
 * 2. completion의 원소 개수 만큼 반복문을 돌면서 두 배열의 동일 위치 원소들을 짝지어 비교. 서로 다른 이름의 쌍일 경우 participant 배열 쪽 원소를 리턴
 *
 * 이 문제는 해시 값 결정 방식보다는 해시함수의 정의를 물어본 의도를 갖고 있다(삽질의 원인)
 */

//1. for문의 다른 형식
//2. unordered_map 자료구조 => hash함수
//3. vector 자료구조
//4. auto 자료형 (타입추론 / java의 object 자료형과 유사, 단 함수의 매개변수 자료형으로는 사용 불가하다는 차이점 존재)
string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> hashMap;

    for(string participantName : participant)
        hashMap[participantName]++;
    for(string completedParticipantName : completion)
        hashMap[completedParticipantName]--;
    for(auto key : hashMap) {
        if(key.second > 0)
            return key.first;
    }
}