#include <stdio.h> // standard input output

int main(void) {
	
	// ���� : ���ϴ� ��

	// ������ ������ ���� ����
	int age1 = 12;
	// int�� �ڷ��� : ������, �Ǽ���, ������ ��
	// age�� ������
	// 12�� �ڷ����� �ش��ϴ� ��

	printf("%d\n", age1); // %d�� ������ ���� ����϶�� �ǹ� (age���� %d��ġ�� ���´ٰ� �� �� ����)
	age1 = 13;
	printf("%d\n", age1);

	// �Ǽ��� ������ ���� ����
	float f = 46.5f;
	printf("%.2f\n", f);
	// f���� ���� �Ҽ��� ������ ���� �� �ִ� ���̴�.
	double d = 4.428;
	
	// ��� : ������ �ʴ� ��

	const int year = 2000; // const�� ����� ������ ���� �˷��ش�.
	printf("born year : %d\n", year);
	// year = 2001; -> year�� ����̱⿡ ���� ������ �� ����.

	// printf
	// ����
	int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 9, 3 + 9);
	printf("%d * %d = %d\n", 30, 79, 30 * 79);

	// scanf
	// Ű���� �Է��� �޾Ƽ� ����
	int input;
	printf("write the number : ");
	scanf("%d", &input);
	// & : ���� input�̶�� ������ ���ǵ� ���� ���� �Է¹ްڴٶ�� �ǹ�
	printf("number : %d\n", input);

	int one, two, three; // ������ ���� 3���� ���� �� �ִ�.
	printf("write the three integer numbers : ");
	scanf("%d %d %d", &one, &two, &three);
	printf("first number : %d\n", one);
	printf("second number : %d\n", two);
	printf("third number : %d\n", three);

	// ����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	
	// ����
	char c = 'A';
	printf("write the word : %c\n", c);

	// ���ڿ�
	char str[256];
	scanf("%s", str, sizeof(str));
	printf("%s\n", str);

	// ������Ʈ
	// �������� �������� ������ �Լ� (���� �ۼ�)
	// �̸�? ����? ������? Ű? ���˸�?
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

	// ���� ���� ���
	printf("\n\n--- information of criminal ---\n\n");
	printf("name     :   %s\n", name);
	printf("age     :   %d\n", age2);
	printf("weight   :   %.2f\n", weight);
	printf("height       :   %.1lf\n", height);
	printf("crime   :   %s\n", whatCrime);

	return 0;
}