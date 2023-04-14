#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {

	// srand(time(NULL)); // 난수 초기화 -> 안하면 원하는 랜덤수가 나오지 않는다.
	// int num = rand() % 3; // 0 ~ 2 중 랜덤으로 하나 뽑는다.
	// int num = rand() % 3 + 1; // 1 ~ 3

	printf("before initializing random number..\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", rand() % 10);
	} // 몇번을 실행을 해도 같은 수들이 나온다.

	srand(time(NULL)); // 난수 초기화
	printf("\n\nafter initializing random number..\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", rand() % 10);
	}

	return 0;
}