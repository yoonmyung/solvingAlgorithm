#include "stdio.h"
#include "time.h"

int main() {
	time_t currentTime = time(NULL);
	struct tm pLocal;
	
	localtime_s(&pLocal, &currentTime);
	printf("%04d-%02d-%02d",
		pLocal.tm_year + 1900, pLocal.tm_mon + 1, pLocal.tm_mday
	);

	return 0;
}

//백준 제출용
/*
	#include "stdio.h"
	#include "time.h"

	int main() {
		time_t currentTime = time(NULL);
		struct tm* pLocal;
	
		pLocal = localtime(&currentTime);
		printf("%04d-%02d-%02d",
			pLocal->tm_year + 1900, pLocal->tm_mon + 1, pLocal->tm_mday
		);

		return 0;
	}
*/