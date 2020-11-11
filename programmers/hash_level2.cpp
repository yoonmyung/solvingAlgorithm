#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    unordered_map<string, bool> hashMap;

    sort(phone_book.begin(), phone_book.end());
    for(int i = 0; i < phone_book.size() - 1; i+=2) {
        if(!phone_book[i + 1].substr(0, phone_book[i].size()).compare(phone_book[i]))
            return false;
    }
    return true;
}