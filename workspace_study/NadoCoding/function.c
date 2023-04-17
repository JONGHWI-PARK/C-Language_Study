#include <stdio.h>

// ����
void p(int num); // p��� �Լ��� ������ �ϰ� int num�� �޴´�.

void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate); // ��ü total������ ate���� �԰� ���� ���� ��ȯ

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void) {

    // function
    // ����

    int num = 2;
    printf("num is %d\n", num); // 2 -> �̰� ���� �� �ʿ��� ���� �Լ�
    p(num);

    // 2 + 3 ��?
    num = num + 3; // num += 3
    printf("num is %d\n", num); // 5
    p(num);

    // 5 - 1 ��?
    num -= 1; // num = num - 1
    printf("num is %d\n", num); // 4
    p(num);

    // 4 x 3 ��?
    num *= 3;
    printf("num is %d\n", num); // 12
    p(num);

    // 12 / 6 ��?
    num /= 6;
    printf("num is %d\n", num); // 2
    p(num);

    // �Լ� ����
    // ��ȯ ���� ���� �Լ�
    function_without_return();

    // ��ȯ ���� �ִ� �Լ� 
    int ret = function_with_return();
    p(ret);

    // �Ķ����(���ް�)�� ���� �Լ�
    function_without_params();

    // �Ķ����(���ް�)�� �ִ� �Լ�
    function_with_params(35, 29, 13);

    // �Ķ����(���ް�)�� �ް�, ��ȯ ���� �ִ� �Լ�
    int retu = apple(5, 2); // 5���� ��� �߿��� 2���� �Ծ���.
    printf("if you eat 2 apples of 5 apples, there are %d apples left.\n", retu);
    printf("if you eat %d apples of %d apples, there are %d apples left.\n", 10, 4, apple(10, 4));

    // ���� �Լ�
    int num2 = 2;
    num2 = add(num2, 3);
    p(num2);

    num2 = sub(num2, 1);
    p(num2);

    num2 = mul(num2, 3);
    p(num2);

    num2 = div(num2, 6);
    p(num2);

    return 0;

}

// ����
void p(int num) { // p�� �̸�, ()��ȣ �ȿ� ���� ���� ���� ��
    printf("number is %d\n", num);
}

// �Լ��� ����
// ��ȯ�� �Լ��̸� (���ް�) {}

// ���ް� : 36
// �Լ� : �� + 4
// ��°� : ? -> ��ȯ��

/* int �Լ��̸�(num){
    return num + 4;
}

void �Լ��̸�(int num, int num2, char c, float f){ // void�� �ƹ��͵� ���ٴ� �ǹ̷� ��ȯ���� �ʴ´�.
// ���� �κа� �����ؾ� �Ѵ�.
} */

void function_without_return() {
    printf("this function has no return value\n");
}

int  function_with_return() {
    printf("this function has return value\n");
    return 10;
    // �� �Լ��� ȣ���ϸ� printf�� ������ �ϰ� 10�̶�� ���� ��ȯ�� ���شٴ� �ǹ�
}

void function_without_params() {
    printf("this function has no parameters\n");
}

void function_with_params(int num1, int num2, int num3) {
    printf("this function has parameters and they are %d, %d, %d\n", 
        num1, num2, num3);
}

int apple(int total, int ate) {
    printf("this function has parameters and return value\n");
    return total - ate;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int mul(int num1, int num2) {
    return num1 * num2;
}

int div(int num1, int num2) {
    return num1 / num2;
}