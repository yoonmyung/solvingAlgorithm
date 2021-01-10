#include "iostream"
#include "string"
#include "stack"
using namespace std;

int main() {
	stack<string> stack;
	int question = 0;

	while(true) {
		string input;
		
		getline(cin, input);
		//solution 2 (꼭 스택을 쓸 필요는 없다)
		if (input == "고무오리 디버깅 끝") break;
		if (input == "문제") question++;
		else if (input == "고무오리") {
			if (question == 0) question += 2;
			else question--;
		}
		/*
		if (!input.compare("고무오리 디버깅 끝")) {
			break;
		}
		else if (!input.compare("문제")) {
			stack.push(input);
		}
		else if (!input.compare("고무오리")) {
			if (stack.empty()) {
				stack.push("문제");
				stack.push("문제");
			}
			else {
				stack.pop();
			}
		}
		*/
	}
	 if (!question) /*if (stack.empty())*/ {
		cout << "고무오리야 사랑해";
	}
	else {
		cout << "힝구";
	}

	return 0;
}