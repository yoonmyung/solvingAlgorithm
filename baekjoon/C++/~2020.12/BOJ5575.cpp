#include "iostream"
using namespace std;

int main() {
	int hour[2], min[2], sec[2];

	for (int i = 0; i < 3; i++) {
		cin >> hour[0] >> min[0] >> sec[0] >> hour[1] >> min[1] >> sec[1];

		//solution 2 (´õ Âª°í, °£´Ü)
		int workingSec = 3600 * (hour[1] - hour[0]) + 60 * (min[1] - min[0]) 
			+ (sec[1] - sec[0]);
		cout << workingSec / 3600 << " " 
			 << workingSec % 3600 / 60 << " " 
			 << workingSec % 60 << '\n';
		/*
		if (sec[1] < sec[0]) {
			sec[1] = sec[1] + 60 - sec[0];
			min[1]--;
		}
		else {
			sec[1] -= sec[0];
		}
		if (min[1] < min[0]) {
			min[1] = min[1] + 60 - min[0];
			hour[1]--;
		}
		else {
			min[1] -= min[0];
		}
		hour[1] -= hour[0];
		cout << hour[1] << " " << min[1] << " " << sec[1] << '\n';
		*/
	}

	return 0;
}