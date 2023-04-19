#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) 
{
    srand(time(NULL)); // 경고를 없애려면 srand((unsigned int)time(NULL)); 
    int treatment = rand() % 4; // 진짜 발모제 선택(0~3)
    printf("\n\n === 자라나라 머리카락 게임 === \n\n");

    int cntShowBottle = 0; // 이번 회차에 조합할 약병 개수
    int prevCntShowBottle = 0; // 앞 회차에서 조합한 약병 개수

    // 3번 테스트
    for (int i = 1; i <= 3; i++) 
    {
        int bottle[4] = { 0, 0, 0, 0 }; // 약병 4개
        do {
            cntShowBottle = rand() % 2 + 2; // 조합할 약병 개수(0~1 + 2 -> 2~3)
        } while (cntShowBottle == prevCntShowBottle);
        prevCntShowBottle = cntShowBottle;
        printf(" > %d번째 테스트 : ", i);

        int isIncluded = 0; // 진짜 발모제인지 확인용
        // 조합할 약병 번호 선택
        for (int j = 0; j < cntShowBottle; j++) 
        {
            int randBottle = rand() % 4; // 약병 번호 뽑기(0~3)
            if (bottle[randBottle] == 0) // 아직 선택되지 않은 약병이면
            { 
                bottle[randBottle] = 1; // 값을 0 → 1
                if (randBottle == treatment) 
                {
                    isIncluded = 1; // 1이면 해당 약병은 진짜 발모제
                }
            }
            else // 이미 선택된 약병이면 중복이므로 다시 선택
            {
                j--; // 반복 횟수 조정
            }
        }

        // 사용자에게 테스트 결과 표시
        for (int k = 0; k < 4; k++) 
        {
            if (bottle[k] == 1) 
            {
                printf("%d ", k + 1); // %d 뒤에 빈칸 하나 넣기
            }
        }
        printf("번 물약을 머리에 바릅니다.\n\n");

        if (isIncluded == 1) // 약병 조합에 발모제가 포함된 경우
        {
            printf(">> 성공! 머리카락이 났어요!!\n");
        }
        else // 약병 조합에 발모제가 포함되지 않은 경우
        {
            printf(">> 실패! 머리카락이 나지 않았어요. ㅠㅠ\n");
        }
        printf("\n   계속하려면 Enter를 누르세요. \n");
        getchar(); // (void) getchar();
    }
     
    // 사용자 입력받기
    printf("\n\n발모제는 몇 번일까요? ");
    int answer; 
    scanf("%d", &answer);
    if (answer == treatment + 1) // 정답일 때
    {
        printf("\n>> 정답입니다!\n");
    }
    else // 틀렸을 때
    {
        printf("\n>> 땡 ! 틀렸어요. 정답은 %d번입니다.\n", treatment + 1);
    }

    return 0;
}

// ----------------------------------------------------

/*
int main(void) {

    srand(time(NULL)); // 경고를 없애려면 srand((unsigned int)time(NULL));
    int treatment = rand() % 4; // 발모제 선택 (0 ~ 3)
    printf("\n\n === 아빠는 대머리 게임 === \n\n");

    int cntShowBottle = 0; // 이번 게임에 보여줄 병 갯수
    int prevCntShowBottle = 0; // 앞 게임에 보여준 병 갯수
    // 서로 보여주는 병 갯수를 다르게 하여 정답률 향상 (처음에 2개 -> 다음엔 3개 ...)

    // 3번의 기회 (3번의 발모제 투여 시도)
    for(int i = 1; i <= 3; i++) {
        int bottle[4] = {0, 0, 0, 0}; // 4개의 병
        do {
            cntShowBottle = rand() % 2 + 2; // 보여줄 병 갯수 (0 ~ 1 +2 -> 2 ~ 3)
        } while(cntShowBottle == prevCntShowBottle);
        prevCntShowBottle = cntShowBottle;
        printf(" > %d 번째 시도 : ", i);

        int isIncluded = 0; // 보여줄 병 중에 발모제가 포함되었는지 여부 (1 : 포함)

        // 보여줄 병 종류를 선택
        for(int j = 0; j < cntShowBottle; j++) {
            int randBottle = rand() % 4; // 0 ~ 3

            // 아직 선택되지 않은 병이면, 선택 처리
            if(bottle[randBottle] == 0) {
                bottle[randBottle] = 1;
                if(randBottle == treatment) {
                    isIncluded = 1; // 1이면 해당 약병은 진짜 발모제
                }
            } else { // 이미 선택된 병이면, 중복이므로 다시 선택
                j--; // 반복 횟수 조정
            }
        }

        // 사용자에게 문제 표시
        for(int k=0; k < 4; k++) {
            if(bottle[k] == 1) {
                printf("%d\n", k + 1);
            }
            printf(" 물약을 머리에 바릅니다. \n\n");
        }

        if(isIncluded == 1) {
            printf("  >> 성공! 머리가 났어요!!\n");
        } else {
            printf("  >> 실패! 머리가 나지 않았어요!!\n");
        }

        printf("\n . . 계속하려면 아무키나 누르세요...\n");
        getchar(); // 사용자가 어떤키를 누를 때까지 대기하는 용도로 사용
        // (void) getchar();
    }

    printf("\n\n 발모제는 몇 번일까요?\n");
    int answer; // 사용자 입력값
    scanf("%d", &answer);

    if(answer == treatment + 1) {
        printf("\n >> 정답!\n");
    } else {
        printf("\n >>  땡! 틀렸어요. 정답은 %d 입니다.\n", treatment + 1);
    }

    return 0;
}
*/