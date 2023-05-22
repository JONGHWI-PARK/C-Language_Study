/*
ť2

����
������ �����ϴ� ť�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.
����� �� ���� �����̴�.

push X: ���� X�� ť�� �ִ� �����̴�.
pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ť�� ����ִ� ������ ������ ����Ѵ�.
empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

�Է�
ù° �ٿ� �־����� ����� �� N (1 �� N �� 2,000,000)�� �־�����. 
��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. 
�־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. 
������ �������� ���� ����� �־����� ���� ����.

���
����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.

���� �Է� 1 
15
push 1
push 2
front
back
size
empty
pop
pop
pop
size
empty
pop
push 3
empty
front

���� ��� 1 
1
2
2
0
1
2
-1
0
1
-1
0
3
*/

#include <stdio.h>
#include <string.h>

int number[100001] = {0};
int cnt = 0;

void push(int num) {
    number[cnt] = num;
    cnt++;
}

void pop() {
    if(cnt != 0) {

        printf("%d\n", number[0]);

        for(int i = 0 ; i < cnt; i++) {
            number[i] = number[i + 1];
        }

        cnt--;

    } else {

        printf("%d\n", -1);

    }

}

void size() {
    printf("%d\n", cnt);
}

void empty() {
    if(cnt == 0) {
        printf("%d\n", 1);
    } else {
        printf("%d\n", 0);
    }
}

void front() {
    if(cnt != 0) {
        printf("%d\n", number[0]);
    } else {
        printf("%d\n", -1);
    }
}

void back() {
    if(cnt != 0) {
        printf("%d\n", number[cnt - 1]);
    } else {
        printf("%d\n", -1);
    }
}

int main(void) {
    int N = 0;
    scanf("%d", &N);

    char stack[10] = {0};
    int num = 0;

    for(int i = 0; i < N; i++) {
        scanf("%s", stack);

        if(strcmp(stack, "push") == 0) {
            scanf("%d", &num);

            push(num);
        } else if(strcmp(stack, "pop") == 0) {
            pop();
        } else if(strcmp(stack, "size") == 0) {
            size();
        } else if(strcmp(stack, "empty") == 0) {
            empty();
        } else if(strcmp(stack, "front") == 0) {
            front();
        } else if(strcmp(stack, "back") == 0) {
            back();
        }
    }

    return 0;
}