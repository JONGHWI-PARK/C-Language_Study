/*
���ڿ� �ݺ�

����
���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
��, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ P�� ����� �ȴ�. 
S���� QR Code "alphanumeric" ���ڸ� ����ִ�.
QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: �̴�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 �� T �� 1,000)�� �־�����. 
�� �׽�Ʈ ���̽��� �ݺ� Ƚ�� R(1 �� R �� 8), ���ڿ� S�� �������� ���еǾ� �־�����. 
S�� ���̴� ��� 1�̸�, 20���ڸ� ���� �ʴ´�. 

���
�� �׽�Ʈ ���̽��� ���� P�� ����Ѵ�.

���� �Է� 1 
2
3 ABC
5 /HTP
���� ��� 1 
AAABBBCCC
/////HHHHHTTTTTPPPPP
*/

#include <stdio.h>
#include <string.h>

int main(void) {

    char S[21] = {0};
    int cnt = 0;
    int R = 0;

    scanf("%d", &cnt);

    char P[200] = {0};

    for(int i = 0; i < cnt; i++) {
        scanf("%d %s", &R, S);

        int k = 0;
        memset(P, 0, sizeof(P));

        for(int m = 0; m < strlen(S); m++) {
            for(int j = 0; j < R; j++) {
                P[k] = S[m];
                k++;
            }
        }
        printf("%s\n", P);
    }   

    return 0;

}