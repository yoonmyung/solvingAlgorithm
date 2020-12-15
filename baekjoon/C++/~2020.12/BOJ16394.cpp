#include <iostream>
using namespace std;
#define anniversary 1946

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int currentYear;
    
    cin >> currentYear;
    cout << currentYear - anniversary;
    
    return 0;
}