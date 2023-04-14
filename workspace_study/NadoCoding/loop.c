#include <stdio.h>

int main(void) {

	// ++ 연산자
	int a = 10;
	printf("a is %d\n", a);
	a++;
	printf("a is %d\n", a);
	a++;
	printf("a is %d\n", a);

	int b = 20;
	// b = b + 1
	printf("b is %d\n", ++b); // ++ 동작을 먼저 수행하고 문장을 끝내라
	printf("b is %d\n", b++); // 문장을 수행하고 나서 ++ 동작을 수행하라
	printf("b is %d\n", b);

	// 반복문
	// for, while, do while

	// for(선언, 조건, 증감)
	for (int i = 1; i <= 10; i++) {

		printf("Hello World %d\n", i);

	}

	// 선언
	// while (조건) { 증감 }
	int i = 1;
	while (i <= 10) {

		printf("Hello World %d\n", i++);
		// i++;

	}

	// do { } while (조건);
	int j = 1;
	do {
		printf("Hello Korea %d\n", j++);
	} while (j <= 10);

	// 2중 반복문
	for (int i = 1; i <= 3; i++) {
		printf("first loop : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("   second loop : %d\n", j);
		}
	}

	// 구구단
	for (int i = 1; i < 10; i++) {
		printf("%d dan\n", i);

		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}

	/*
	*
	**
	***
	****
	*****
	*/
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	/*
	*****
	****
	***
	**
	*
	*/
	for (int i = 0; i < 5; i++) {
		for (int j = 5-i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}

	/*
	    *
	   **
	  ***
	 ****
	*****
	*/
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 4; j++ ) {
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	// 피라미드를 쌓아라 - 프로젝트
	/*
	    *
	   ***
	  *****
	 *******
	*********
	
	*/
	int floor;
	printf("How many floors are you going to stack? ");
	scanf("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;

}