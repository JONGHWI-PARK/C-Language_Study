#include <stdio.h>

int main(void) {

    // 배열
    int subway_1 = 30; // 지하철 1호차에 30명이 타고 있다.
    int subway_2 = 40;
    int subway_3 = 50;

    printf("there are %d people in line one subway\n", subway_1);
    printf("there are %d people in line two subway\n", subway_2);
    printf("there are %d people in line three subway\n", subway_3);


    // 여러 개의 변수를 함께, 동시에 생성
    int subway_array[3]; // []안의 숫자는 몇 개의 칸을 가질 것이냐 -> 몇 개의 int형 정수를 저장하는 배열을 만들 것이냐
    // [0] [1] [2]
    subway_array[0] = 35;
    subway_array[1] = 45;
    subway_array[2] = 55;

    for(int i = 0; i < 3; i++) {
        printf("there are %d people in line %d subway\n", subway_array[i], i);
    }

    // 값 설정 방법
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 값은 초기화를 반드시 해야 함
    // 초기화를 하지 않으면 더미(쓰레기, 알 수 없는) 값이 출력된다.
    for(int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }

    /*
    // 배열 크기는 항상 상수로 선언
    int size = 10;
    int arr1[size]; // 배열을 선언할 때는 숫자를 넣어야한다.
    */
   printf("\n");

   int arr_1[10] = {1, 2}; // 3번째 값부터는 자동으로 '0'으로 초기화 됨
   for(int i = 0; i < 10; i++) {
        printf("%d", arr_1[i]);
    }
    
    printf("\n");

    int arr_2[] = {1, 2}; // 크기는 arr[2]와 같다.
    for(int i = 0; i < 2; i++){
        printf("%d", arr_2[i]);
    }

     printf("\n");

    float arr_f[5] = {1.0f, 2.0f, 3.0f};
    for(int i = 0; i < 5; i++){
        printf("%.2f\n", arr_f[i]);
    }

    // 문자 vs 문자열 (한 글자 vs 한 글자 이상)
    char c = 'A'; // 문자의 자료형
    printf("%c\n", c);

    // 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0' 이 포함되어야 함
    // char str[6] = "coding"; // [c] [o] [d] [i] [n] [g] -> 6개의 char형 공간이 생김
    char str[7] = "coding"; // [c] [o] [d] [i] [n] [g] [\0]
    printf("%s\n", str);

    char str_2[] = "coding";
    printf("%s\n", str_2);
    printf("str_2 크기 : %d\n", sizeof(str_2)); // sizeof는 배열형 변수의 크기를 나타낸다.

    for(int i = 0; i < sizeof(str); i++) {
        printf("%c\n", str[i]); // 출력을 보면 비어있는 값이 있는데 그 것이 NULL문자의 공간이다.
    }

    char kor[] = "나도코딩";
    printf("%s\n", kor);
    printf("%d\n", sizeof(kor));
    // 영어 1글자 : 1 byte
    // 한글 1글자 : 2 byte
    // char 크기 : 1 byte
    // -> 그래서 현재 작성한 배열형 변수의 크기는 9인 것이다.

     char c_array[7] = {'c', 'o', 'd', 'i', 'n', 'g', '\0'};
     // char c_array[6] = {'c', 'o', 'd', 'i', 'n', 'g'}; // 출력 값이 이상하게 나온다.
     printf("%s\n", c_array);

     char c_array_2[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
     // printf("%s\n", c_array_2);
    for(int i = 0; i < sizeof(c_array_2); i++) { // 남는 공간이 있다면 문자 끝이 자동으로 들어간다.
        printf("%c\n", c_array_2[i]);
    }

    for(int i = 0; i < sizeof(c_array_2); i++) {
        printf("%d\n", c_array_2[i]); // ASCII 코드 값 출력 (NULL 문자 0으로 입력됨)
    }

    // 문자열 입력받기 : 경찰서 조서 쓰기 예제
    /* char name[256];
	printf("이름을 입력하세요 : ");
	scanf("%s", name, sizeof(name));
    printf("%s\n", name); */
    // -> 충분한 공간을 보여주려고 : 입력하려는 문자열보다 넉넉하게 크기를 잡는 것이 좋다.

    // 참고 : ASCII 코드 ? ANSI (미국 표준협회) 에서 제시한 표준 코드 체계
    // 7bit 총 128개 코드 (0 ~ 127의 숫자로 표현)
    // a : 97 (문자 a의 아스키코드 정수값)
    // A : 65
    // 0 : 48
    // -> 국가별로 사용하는 문자가 달라 호환이 안되어서 이 체계를 만듦.

    printf("%c\n", 'a');
    printf("%d\n", 'a');

    printf("%c\n", 'b');
    printf("%d\n", 'b');

    printf("%c\n", 'A');
    printf("%d\n", 'A');

    printf("%c\n", '\0');
    printf("%d\n", '\0');

    printf("%c\n", '0');
    printf("%d\n", '0');

    printf("%c\n", '1');
    printf("%d\n", '1');

    // 참고2 : 0 ~ 127 사이의 아스키코드 정수값에 해당하는 문자 확인
    for(int i = 0; i < 128; i++) {
        printf("아스키코드 정수 %d : %c\n", i, i);
    }


    return 0;

}