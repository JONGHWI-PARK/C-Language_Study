#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void) { // 전달값이 없는 main이라는 함수이고 int형이라 정수형 자료를 반환하는 함수
    
    // 문이 5개가 있고 각 문마다 점점 어려운 수식 퀴즈가 출제
    // 맞히면 통과, 틀리면 실패

    srand(time(NULL));
    int count = 0;
    for(int i = 1; i < 6; i++) {
        // x + y = ?
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        // ↓ printf("%d x %d ?", num1, num2);
        showQuestion(i, num1, num2);

        int answer = -1;
        scanf("%d", &answer);
        if(answer == -1) {
            printf("exit the program!\n");
            exit(0); // 여기서 바로 프로그램을 끝내라 라는 뜻
        } else if(answer == num1 * num2) {
            // 성공
            success();
            count++;
        } else {
            //실패
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
    printf("\n\twhat is %d x %d ?\n\n", num1, num2); // \t는 tab을 의미
    printf("#########################\n");
    printf("\npress your password (end : -1) >> ");
}

void success() {
    printf("\n >> Good! That's right!\n");
}

void fail() {
    printf("\n >> Nope! you are wrong!\n");
}