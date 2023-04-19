#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) 
{
    srand(time(NULL)); // ����� ���ַ��� srand((unsigned int)time(NULL)); 
    int treatment = rand() % 4; // ��¥ �߸��� ����(0~3)
    printf("\n\n === �ڶ󳪶� �Ӹ�ī�� ���� === \n\n");

    int cntShowBottle = 0; // �̹� ȸ���� ������ �ິ ����
    int prevCntShowBottle = 0; // �� ȸ������ ������ �ິ ����

    // 3�� �׽�Ʈ
    for (int i = 1; i <= 3; i++) 
    {
        int bottle[4] = { 0, 0, 0, 0 }; // �ິ 4��
        do {
            cntShowBottle = rand() % 2 + 2; // ������ �ິ ����(0~1 + 2 -> 2~3)
        } while (cntShowBottle == prevCntShowBottle);
        prevCntShowBottle = cntShowBottle;
        printf(" > %d��° �׽�Ʈ : ", i);

        int isIncluded = 0; // ��¥ �߸������� Ȯ�ο�
        // ������ �ິ ��ȣ ����
        for (int j = 0; j < cntShowBottle; j++) 
        {
            int randBottle = rand() % 4; // �ິ ��ȣ �̱�(0~3)
            if (bottle[randBottle] == 0) // ���� ���õ��� ���� �ິ�̸�
            { 
                bottle[randBottle] = 1; // ���� 0 �� 1
                if (randBottle == treatment) 
                {
                    isIncluded = 1; // 1�̸� �ش� �ິ�� ��¥ �߸���
                }
            }
            else // �̹� ���õ� �ິ�̸� �ߺ��̹Ƿ� �ٽ� ����
            {
                j--; // �ݺ� Ƚ�� ����
            }
        }

        // ����ڿ��� �׽�Ʈ ��� ǥ��
        for (int k = 0; k < 4; k++) 
        {
            if (bottle[k] == 1) 
            {
                printf("%d ", k + 1); // %d �ڿ� ��ĭ �ϳ� �ֱ�
            }
        }
        printf("�� ������ �Ӹ��� �ٸ��ϴ�.\n\n");

        if (isIncluded == 1) // �ິ ���տ� �߸����� ���Ե� ���
        {
            printf(">> ����! �Ӹ�ī���� �����!!\n");
        }
        else // �ິ ���տ� �߸����� ���Ե��� ���� ���
        {
            printf(">> ����! �Ӹ�ī���� ���� �ʾҾ��. �Ф�\n");
        }
        printf("\n   ����Ϸ��� Enter�� ��������. \n");
        getchar(); // (void) getchar();
    }
     
    // ����� �Է¹ޱ�
    printf("\n\n�߸����� �� ���ϱ��? ");
    int answer; 
    scanf("%d", &answer);
    if (answer == treatment + 1) // ������ ��
    {
        printf("\n>> �����Դϴ�!\n");
    }
    else // Ʋ���� ��
    {
        printf("\n>> �� ! Ʋ�Ⱦ��. ������ %d���Դϴ�.\n", treatment + 1);
    }

    return 0;
}

// ----------------------------------------------------

/*
int main(void) {

    srand(time(NULL)); // ����� ���ַ��� srand((unsigned int)time(NULL));
    int treatment = rand() % 4; // �߸��� ���� (0 ~ 3)
    printf("\n\n === �ƺ��� ��Ӹ� ���� === \n\n");

    int cntShowBottle = 0; // �̹� ���ӿ� ������ �� ����
    int prevCntShowBottle = 0; // �� ���ӿ� ������ �� ����
    // ���� �����ִ� �� ������ �ٸ��� �Ͽ� ����� ��� (ó���� 2�� -> ������ 3�� ...)

    // 3���� ��ȸ (3���� �߸��� ���� �õ�)
    for(int i = 1; i <= 3; i++) {
        int bottle[4] = {0, 0, 0, 0}; // 4���� ��
        do {
            cntShowBottle = rand() % 2 + 2; // ������ �� ���� (0 ~ 1 +2 -> 2 ~ 3)
        } while(cntShowBottle == prevCntShowBottle);
        prevCntShowBottle = cntShowBottle;
        printf(" > %d ��° �õ� : ", i);

        int isIncluded = 0; // ������ �� �߿� �߸����� ���ԵǾ����� ���� (1 : ����)

        // ������ �� ������ ����
        for(int j = 0; j < cntShowBottle; j++) {
            int randBottle = rand() % 4; // 0 ~ 3

            // ���� ���õ��� ���� ���̸�, ���� ó��
            if(bottle[randBottle] == 0) {
                bottle[randBottle] = 1;
                if(randBottle == treatment) {
                    isIncluded = 1; // 1�̸� �ش� �ິ�� ��¥ �߸���
                }
            } else { // �̹� ���õ� ���̸�, �ߺ��̹Ƿ� �ٽ� ����
                j--; // �ݺ� Ƚ�� ����
            }
        }

        // ����ڿ��� ���� ǥ��
        for(int k=0; k < 4; k++) {
            if(bottle[k] == 1) {
                printf("%d\n", k + 1);
            }
            printf(" ������ �Ӹ��� �ٸ��ϴ�. \n\n");
        }

        if(isIncluded == 1) {
            printf("  >> ����! �Ӹ��� �����!!\n");
        } else {
            printf("  >> ����! �Ӹ��� ���� �ʾҾ��!!\n");
        }

        printf("\n . . ����Ϸ��� �ƹ�Ű�� ��������...\n");
        getchar(); // ����ڰ� �Ű�� ���� ������ ����ϴ� �뵵�� ���
        // (void) getchar();
    }

    printf("\n\n �߸����� �� ���ϱ��?\n");
    int answer; // ����� �Է°�
    scanf("%d", &answer);

    if(answer == treatment + 1) {
        printf("\n >> ����!\n");
    } else {
        printf("\n >>  ��! Ʋ�Ⱦ��. ������ %d �Դϴ�.\n", treatment + 1);
    }

    return 0;
}
*/