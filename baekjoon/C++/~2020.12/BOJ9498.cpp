#include <cstdio>

int main() {
	int score; 
	
	//solution 2 짧고 신박함!
	scanf("%d", &score);
	printf("%c\n", "FFFFFFDCBAA"[score / 10]);
	
	/*
	scanf("%d", &score);
  if (score < 60) {
		printf("F");
  }
  else if (score < 70) {
    printf("D");
  }
  else if (score < 80) {
    printf("C");
  }
  else if (score < 90) {
    printf("B");
  }
  else {
    printf("A");
  }
	*/
	return 0;
}