#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	// 버스를 탄다고 가정 학생 / 일반인으로 구분 (일반인 : 20세)
	int age = 17;
	// if (조건) {. . .} else {. . .}
	if (age >= 20) {
		printf("you are adult.\n");
	}
	else {
		printf("you are student.\n");
	}

	// 초등생(8~13) / 중학생(14~16) / 고등학생(17~19)으로 나누면?
	// if / else if / else
	int age2 = 17;
	if (age2 >= 8 && age2 <= 13) {
		printf("kid\n");
	}
	else if (age2 >= 14 && age2 <= 16) {
		printf("middle school student\n");
	}
	else if (age2 >= 17 && age2 <= 19) {
		printf("high school student\n");
	}
	else {
		printf("adult\n");
	}

	// braek / continue
	// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 한다.
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("The rest of the students, go home!\n");
			break; // 반복문 탈출
		}
		printf("Number %d student! Get ready to do presentation!\n", i);
	}

	// 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	// 7번을 제외하고 6번부터 10번까지 조별 발표 진행
	for (int i = 0; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("number %d student is absent.\n", i);
				continue; 
				// 이 조건에 들어왔을 때 continue를 만나면 그 이후의 문장을 실행하지 않고
				// 다음 반복으로 넘어간다. i=7 -> i=8
			}
			if (i == 9) {
				printf("number %d student is expelled from school.\n", i);
				continue;
			}
			printf("Number %d student! Get ready to do presentation!\n", i);
		}
	}

	// and(&&), or(||)
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 12;
	if (a == b && c == d) {
		printf("a&b same and c&d same too.\n");
	}
	else {
		printf("different\n");
	}

	if (a == b || c == d) {
		printf("a&b same or c & d same\n");
	}
	else {
		printf("different\n");
	}
	// &&는 모두 참이여야하고 ||는 하나만 참이여도 된다.

	// 가위 0 바위 1 보 2
	srand(time(NULL));
	int i = rand() % 3; // 0 ~ 2 반환
	printf("%d\n", i);
	if (i == 0) {
		printf("scissors\n");
	} 
	else if (i == 1) {
		printf("rock\n");
	}
	else if (i == 2) {
		printf("paper\n");
	}
	else {
		printf("nothing\n");
	}

	// switch case
	srand(time(NULL));
	int j = rand() % 3;
	printf("%d\n", j);
	switch (j) {
	case 0:
		printf("scissors");
		break;
	case 1:
		printf("rock");
		break;
	case 2:
		printf("paper");
		break;
	default: // 위의 값을 제외한 것
		printf("nothing");
		break;
	}
	// break를 안넣으면 원하는 값 이후의 값들이 모두 출력된다.

	int age3;
	printf("\n\nage : ");
	scanf("%d", &age3);
	switch (age3) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("elementary school student\n"); break;
	case 14:
	case 15:
	case 16:printf("middle school student\n"); break;
	case 17:
	case 18:
	case 19:printf("high school student\n"); break;
	default:printf("not student\n"); break;
	}

	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 사이의 숫자
	printf("number : %d\n", num);
	int answer = 0;	// 정답
	int chance = 5; // 기회
	while (1) { // 1은 참 0은 거짓
		printf("the rest of your chance %d\n", chance--);
		printf("Let's guess the number (1 ~ 100) : ");
		scanf("%d", &answer);
		if (answer > num) {
			printf("DOWN ↓\n\n");
		}
		else if (answer < num) {
			printf("UP ↑\n\n");
		}
		else if (answer == num) {
			printf("RIGHT! \n");
			break;
		}
		else {
			printf("Error\n");
		}

		if (chance == 0) {
			printf("you don't have chance anymore");
			break;
		}
	}

	return 0;
}