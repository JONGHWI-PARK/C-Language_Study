#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void) { // ���ް��� ���� main�̶�� �Լ��̰� int���̶� ������ �ڷḦ ��ȯ�ϴ� �Լ�
    
    // ���� 5���� �ְ� �� ������ ���� ����� ���� ��� ����
    // ������ ���, Ʋ���� ����

    srand(time(NULL));
    int count = 0;
    for(int i = 1; i < 6; i++) {
        // x + y = ?
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        // �� printf("%d x %d ?", num1, num2);
        showQuestion(i, num1, num2);

        int answer = -1;
        scanf("%d", &answer);
        if(answer == -1) {
            printf("exit the program!\n");
            exit(0); // ���⼭ �ٷ� ���α׷��� ������ ��� ��
        } else if(answer == num1 * num2) {
            // ����
            success();
            count++;
        } else {
            //����
            fail();
        }

    }

    printf("\n\n You answered %d questions correctly.\n", count);

    if(count > 3) {
        printf("\n\n you can go outside!\n");
    } else {
        printf("\n\n you never go outside!\n");
    }
    
    return 0;

}

int getRandomNumber(int level) {
    return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2) {
    printf("\n\n\n##### %dth password\n", level);
    printf("\n\twhat is %d x %d ?\n\n", num1, num2); // \t�� tab�� �ǹ�
    printf("#########################\n");
    printf("\npress your password (end : -1) >> ");
}

void success() {
    printf("\n >> Good! That's right!\n");
}

void fail() {
    printf("\n >> Nope! you are wrong!\n");
}