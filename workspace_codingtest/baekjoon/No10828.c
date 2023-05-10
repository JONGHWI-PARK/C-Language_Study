/*
����

����
������ �����ϴ� ������ ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �� �ټ� �����̴�.

push X: ���� X�� ���ÿ� �ִ� �����̴�.
pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
top: ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

�Է�
ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. 
�־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.

���
����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.

���� �Է� 1 
14
push 1
push 2
top
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
top

���� ��� 1 
2
2
0
2
1
-1
0
1
-1
0
3

--------------------

���� �Է� 2 
7
pop
top
push 123
top
pop
top
pop

���� ��� 2 
-1
-1
123
123
-1
-1
*/

#include <stdio.h>
#include <string.h>

int stack[100001] = {0};
int cnt = 0;

void push(int num) {
    stack[cnt] = num;
    cnt++; 
}

void pop() {

    if(cnt != 0) {
        printf("%d\n", stack[cnt - 1]);
    } else {
        printf("%d\n", -1);

        return;
    }
    
    stack[cnt - 1] = 0;
    cnt--;
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

void top() {
    if(cnt != 0) {
        printf("%d\n", stack[cnt - 1]);
    } else {
        printf("%d\n", -1);
    }
}


int main(void) {

    int n = 0;
    scanf("%d", &n);

    char str[10] = {0};
    int num = 0;

    for(int i = 0; i < n; i++) {
        scanf("%s", str);

        if(strcmp(str, "push") == 0) {
            scanf("%d", &num);

            push(num);
        } else if(strcmp(str, "pop") == 0) {
            pop();
        } else if(strcmp(str, "size") == 0) {
            size();
        } else if(strcmp(str, "empty") == 0) {
            empty();
        } else if(strcmp(str, "top") == 0) {
            top();
        }
    }

    return 0;

}