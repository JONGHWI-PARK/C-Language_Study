/*
���

����
������� ���� ����� ������ ���� ���Ѵ�. ����� ���ڸ� �дµ� ������ �ִ�. 
�̷��� ������ ���ϴ� ����� ���ؼ� ����̴� ���� ũ�⸦ ���ϴ� ������ ���־���. 
����̴� �� �ڸ� �� �� ���� ĥ�ǿ� ���־���. �� ������ ũ�Ⱑ ū ���� ���غ���� �ߴ�.
����� ���� �ٸ� ����� �ٸ��� �Ųٷ� �д´�. ���� ���, 734�� 893�� ĥ�ǿ� �����ٸ�, ����� �� ���� 437�� 398�� �д´�.
 ����, ����� �� ���� ū ���� 437�� ū ����� ���� ���̴�.
�� ���� �־����� ��, ����� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ����̰� ĥ�ǿ� ���� �� �� A�� B�� �־�����. 
�� ���� ���� ���� �� �ڸ� ���̸�, 0�� ���ԵǾ� ���� �ʴ�.

���
ù° �ٿ� ����� ����� ����Ѵ�.

���� �Է� 1 
734 893
���� ��� 1 
437
---------------------
���� �Է� 2 
221 231
���� ��� 2 
132
---------------------
���� �Է� 3 
839 237
���� ��� 3 
938
*/

#include <stdio.h>
#include <string.h>

void reverse(char arr[]) {
    
    char tmp;

    int strLength = strlen(arr);

    for(int i = 0; i < strLength / 2; i++) {
        tmp = arr[i];
        arr[i] = arr[strLength - 1];
        arr[strLength - 1] = tmp;
    }

}

int main(void) {

    char A[4] = {0};
    char B[4] = {0};

    scanf("%s %s", A, B);

#if 0
    char tmp;

    for(int i = 0; i < 3 / 2; i++) {
        tmp = A[i];
        A[i] = A[strlen(A) - 1];
        A[strlen(A) - 1] = tmp;
    }

    for(int i = 0; i < 3 / 2; i++) {
        tmp = B[i];
        B[i] = B[strlen(B) - 1];
        B[strlen(B) - 1] = tmp;
    }
#else
    reverse(A);
    reverse(B);
#endif

    int numA[4] = {0};
    int numB[4] = {0};

    for(int i = 0; i < 3; i++) {
        numA[i] = A[i] - '0';
        numB[i] = B[i] - '0';
    }

    int sumA = numA[0] * 100 + numA[1] * 10 + numA[2];
    int sumB = numB[0] * 100 + numB[1] * 10 + numB[2];

    /*
    if(sumA > sumB) {
        printf("%d\n", sumA);
    } else {
        printf("%d\n", sumB);
    }
    */
    
    printf("%d\n", ((sumA > sumB) ? sumA : sumB));

/*
            if(numA[0] > numB[0]) {
            printf("%d\n", numA[i]);
        } else if(numA[0] < numB[0]) {
            printf("%d\n", numB[i]);
        } else if(numA[0] == numB[0] && numA[1] > numB[1]) {
            printf("%d\n", numA[i]);
        } else if(numA[0] == numB[0] && numA[1] < numB[1]) {
            printf("%d\n", numB[i]);
        } else if(numA[0] == numB[0] && numA[1] == numB[1] && numA[2] > numA[2]) {
            printf("%d\n", numA[i]);
        } else if(numA[0] == numB[0] && numA[1] == numB[1] && numA[2] > numA[2]) {
            printf("%d\n", numB[i]);
        }
        */

    return 0;

}