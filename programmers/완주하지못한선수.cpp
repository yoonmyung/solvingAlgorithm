#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> hashMap;

    for (string participantName : participant)
        hashMap[participantName]++;
    for (string completedParticipantName : completion)
        hashMap[completedParticipantName]--;
    for (auto key : hashMap) {
        if (key.second > 0)
            return key.first;
    }
}