#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	// ������ ź�ٰ� ���� �л� / �Ϲ������� ���� (�Ϲ��� : 20��)
	int age = 17;
	// if (����) {. . .} else {. . .}
	if (age >= 20) {
		printf("you are adult.\n");
	}
	else {
		printf("you are student.\n");
	}

	// �ʵ��(8~13) / ���л�(14~16) / ����л�(17~19)���� ������?
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
	// 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �Ѵ�.
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("The rest of the students, go home!\n");
			break; // �ݺ��� Ż��
		}
		printf("Number %d student! Get ready to do presentation!\n", i);
	}

	// 1������ 30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
	// 7���� �����ϰ� 6������ 10������ ���� ��ǥ ����
	for (int i = 0; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("number %d student is absent.\n", i);
				continue; 
				// �� ���ǿ� ������ �� continue�� ������ �� ������ ������ �������� �ʰ�
				// ���� �ݺ����� �Ѿ��. i=7 -> i=8
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
	// &&�� ��� ���̿����ϰ� ||�� �ϳ��� ���̿��� �ȴ�.

	// ���� 0 ���� 1 �� 2
	srand(time(NULL));
	int i = rand() % 3; // 0 ~ 2 ��ȯ
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
	default: // ���� ���� ������ ��
		printf("nothing");
		break;
	}
	// break�� �ȳ����� ���ϴ� �� ������ ������ ��� ��µȴ�.

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
	int num = rand() % 100 + 1; // 1 ~ 100 ������ ����
	printf("number : %d\n", num);
	int answer = 0;	// ����
	int chance = 5; // ��ȸ
	while (1) { // 1�� �� 0�� ����
		printf("the rest of your chance %d\n", chance--);
		printf("Let's guess the number (1 ~ 100) : ");
		scanf("%d", &answer);
		if (answer > num) {
			printf("DOWN ��\n\n");
		}
		else if (answer < num) {
			printf("UP ��\n\n");
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