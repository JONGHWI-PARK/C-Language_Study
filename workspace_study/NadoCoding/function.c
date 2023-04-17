#include <stdio.h>

// 선언
void p(int num); // p라는 함수를 선언을 하고 int num을 받는다.

void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate); // 전체 total개에서 ate개를 먹고 남은 수를 반환

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void) {

    // function
    // 계산기

    int num = 2;
    printf("num is %d\n", num); // 2 -> 이걸 줄일 때 필요한 것이 함수
    p(num);

    // 2 + 3 은?
    num = num + 3; // num += 3
    printf("num is %d\n", num); // 5
    p(num);

    // 5 - 1 은?
    num -= 1; // num = num - 1
    printf("num is %d\n", num); // 4
    p(num);

    // 4 x 3 은?
    num *= 3;
    printf("num is %d\n", num); // 12
    p(num);

    // 12 / 6 은?
    num /= 6;
    printf("num is %d\n", num); // 2
    p(num);

    // 함수 종류
    // 반환 값이 없는 함수
    function_without_return();

    // 반환 값이 있는 함수 
    int ret = function_with_return();
    p(ret);

    // 파라미터(전달값)가 없는 함수
    function_without_params();

    // 파라미터(전달값)가 있는 함수
    function_with_params(35, 29, 13);

    // 파라미터(전달값)도 받고, 반환 값이 있는 함수
    int retu = apple(5, 2); // 5개의 사과 중에서 2개를 먹었다.
    printf("if you eat 2 apples of 5 apples, there are %d apples left.\n", retu);
    printf("if you eat %d apples of %d apples, there are %d apples left.\n", 10, 4, apple(10, 4));

    // 계산기 함수
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

// 정의
void p(int num) { // p는 이름, ()괄호 안에 들어가는 것은 전달 값
    printf("number is %d\n", num);
}

// 함수의 형태
// 반환형 함수이름 (전달값) {}

// 전달값 : 36
// 함수 : ㅁ + 4
// 출력값 : ? -> 반환형

/* int 함수이름(num){
    return num + 4;
}

void 함수이름(int num, int num2, char c, float f){ // void는 아무것도 없다는 의미로 반환하지 않는다.
// 선언 부분과 동일해야 한다.
} */

void function_without_return() {
    printf("this function has no return value\n");
}

int  function_with_return() {
    printf("this function has return value\n");
    return 10;
    // 이 함수를 호출하면 printf를 수행을 하고 10이라는 값을 반환을 해준다는 의미
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