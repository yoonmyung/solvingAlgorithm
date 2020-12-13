#include <locale.h>
#include <iostream>
using namespace std;
#define startingIndex 44031;

int main() {
	setlocale(LC_ALL, "Korean");
	wchar_t input;
	int result;

	wcin >> input;
	result = (int)input - startingIndex;
	cout << result;

	return 0;
}