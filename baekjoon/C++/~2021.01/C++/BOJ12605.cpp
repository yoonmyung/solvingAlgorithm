#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;

int main() {
	int N, seperator = 0;
	string input, part;
	stack<string> stack;

	cin >> N;
	getchar();	//연속으로 입력받는 경우 중간에 입력버퍼를 꼭! 비워줘야 코드가 의도대로 작동한다.
	for (int i = 0; i < N; i++) {
		getline(cin, input);
		//solution 2 (stringstream 이용 - 문자열 내용을 띄어쓰기로 구별할 때 아주 유용!)
		stringstream ss(input);	
		//stringstream에 input 넣기 
		//(왜인진 몰라도 전역변수를 재사용하는 것이 아닌 매번 이런식으로 새로 선언해서 넣어줘야 제대로 작동한다.
		//전역변수로 선언 후 넣을 경우 ss << input 이렇게 넣으면 된다.
		while (true) {
			if (ss >> part) {	
				//stringstream에서 순서대로 문자열 토막 꺼내기 (띄어쓰기를 기준으로 한 토막씩 꺼낸다)
				//if문이 true => stringstream에서 토막이 나왔다
				//if문이 false => stringstream에서 더이상 나올 토막이 없다
				stack.push(part);
			}
			else {
				break;
			}
		}
		cout << "Case #" << i + 1 << ":";
		while (!stack.empty()) {
			cout << " " << stack.top();
			stack.pop();
		}
		cout << '\n';

		/*
		while (seperator < input.length()) {
			part += input[seperator];
			if (seperator == input.length() - 1 || input[++seperator] == ' ') {
				stack.push(part);
				stack.push(" ");
				part.clear();
				seperator++;
			}
		}
		seperator = 0;
		cout << "Case #" << i + 1 << ":";
		while (!stack.empty()) {
			cout << stack.top();
			stack.pop();
		}
		cout << "\n";
		*/
	}

	return 0;
}