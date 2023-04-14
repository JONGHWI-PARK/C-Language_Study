#include <stdio.h> // standard input output

int main(void) {
	
	// 변수 : 변하는 수

	// 정수형 변수에 대한 예제
	int age1 = 12;
	// int는 자료형 : 정수형, 실수형, 문자형 등
	// age는 변수명
	// 12는 자료형이 해당하는 값

	printf("%d\n", age1); // %d는 정수형 값을 출력하라는 의미 (age값이 %d위치에 들어온다고 볼 수 있음)
	age1 = 13;
	printf("%d\n", age1);

	// 실수형 변수에 대한 예제
	float f = 46.5f;
	printf("%.2f\n", f);
	// f앞의 점은 소수점 개수를 정할 수 있는 점이다.
	double d = 4.428;
	
	// 상수 : 변하지 않는 수

	const int year = 2000; // const를 사용해 상수라는 것을 알려준다.
	printf("born year : %d\n", year);
	// year = 2001; -> year이 상수이기에 값을 변경할 수 없다.

	// printf
	// 연산
	int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 9, 3 + 9);
	printf("%d * %d = %d\n", 30, 79, 30 * 79);

	// scanf
	// 키보드 입력을 받아서 저장
	int input;
	printf("write the number : ");
	scanf("%d", &input);
	// & : 내가 input이라는 변수가 정의된 곳에 값을 입력받겠다라는 의미
	printf("number : %d\n", input);

	int one, two, three; // 정수형 값을 3개를 받을 수 있다.
	printf("write the three integer numbers : ");
	scanf("%d %d %d", &one, &two, &three);
	printf("first number : %d\n", one);
	printf("second number : %d\n", two);
	printf("third number : %d\n", three);

	// 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	
	// 문자
	char c = 'A';
	printf("write the word : %c\n", c);

	// 문자열
	char str[256];
	scanf("%s", str, sizeof(str));
	printf("%s\n", str);

	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름? 나이? 몸무게? 키? 범죄명?
	char name[256];
	printf("what is your name? ");
	scanf("%s", name, sizeof(name));
	
	int age2;
	printf("how old are you? ");
	scanf("%d", &age2);

	float weight;
	printf("what is your weight? ");
	scanf("%f", &weight);

	double height;
	printf("How tall are you? ");
	scanf("%lf", &height);

	char whatCrime[256];
	printf("What crime did you commit? ");
	scanf("%s", whatCrime, sizeof(whatCrime));

	// 조서 내용 출력
	printf("\n\n--- information of criminal ---\n\n");
	printf("name     :   %s\n", name);
	printf("age     :   %d\n", age2);
	printf("weight   :   %.2f\n", weight);
	printf("height       :   %.1lf\n", height);
	printf("crime   :   %s\n", whatCrime);

	return 0;
}