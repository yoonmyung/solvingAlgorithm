#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> subject;
    int result, input;
    bool isHistory = false;

    while (true) {
        cin >> input;
        subject.push_back(input);
        if (subject.size() == 4) {
            sort(subject.begin(), subject.end());
            result = subject[3] + subject[2] + subject[1];
            subject.clear();
            isHistory = true;
        }
        else if (isHistory && subject.size() == 2) {
            sort(subject.begin(), subject.end());
            result += subject[1];
            break;
        }
    }
    cout << result;

    return 0;
}