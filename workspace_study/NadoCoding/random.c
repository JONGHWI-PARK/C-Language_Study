#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {

	// srand(time(NULL)); // ���� �ʱ�ȭ -> ���ϸ� ���ϴ� �������� ������ �ʴ´�.
	// int num = rand() % 3; // 0 ~ 2 �� �������� �ϳ� �̴´�.
	// int num = rand() % 3 + 1; // 1 ~ 3

	printf("before initializing random number..\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", rand() % 10);
	} // ����� ������ �ص� ���� ������ ���´�.

	srand(time(NULL)); // ���� �ʱ�ȭ
	printf("\n\nafter initializing random number..\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", rand() % 10);
	}

	return 0;
}