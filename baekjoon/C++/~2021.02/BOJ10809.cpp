#include "stdio.h"

int main() {
	char S[100];
	int alphabet[26];
	// { 0, } 이건 0으로 초기화 할 때만 작동한다.

	for (int i = 0; i < 26; i++) {
		alphabet[i] = -1;
	}
	scanf_s("%s", &S, 100);
	for (int i = 0; i < 100; i++) {
		if (S[i] < 97 || S[i] > 123) {
			break;
		}
		else if (alphabet[S[i] - 'a'] < 0) {
			alphabet[S[i] - 'a'] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}
	return 0;
}