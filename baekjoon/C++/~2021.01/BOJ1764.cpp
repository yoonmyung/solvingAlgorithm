#include <iostream>
#include <map>
using namespace std;

int main() {
	int N, M, cnt = 0;
	map<string, int> map;
	string name;
	
	cin >> N >> M;
	for (int i = 0; i < N + M; i++) {
		cin >> name;
		if (map.find(name) != map.end()) {
			map[name]++;
		}
		else {
			map.insert(pair<string, int>(name, 0));
		}
	}
	for (auto it = map.begin(); it != map.end(); it++) {
		if (it->second > 0) {
			cnt++;
		}
	}
	cout << cnt << '\n';
	//auto 키워드: 자료형을 알 수 없을 때 유용하게 사용 가능
	//듣보잡에 해당되는 원소를 vector에 담아서 vector사이즈와 vector 출력만 하면 위의 for문은 필요없다.
	for (auto it = map.begin(); it != map.end(); it++) {
		if (it->second > 0) {
			cout << it->first << '\n';
		}
	}

	return 0;
}