#include <stdio.h>

int main(void) {

    // �迭
    int subway_1 = 30; // ����ö 1ȣ���� 30���� Ÿ�� �ִ�.
    int subway_2 = 40;
    int subway_3 = 50;

    printf("there are %d people in line one subway\n", subway_1);
    printf("there are %d people in line two subway\n", subway_2);
    printf("there are %d people in line three subway\n", subway_3);


    // ���� ���� ������ �Բ�, ���ÿ� ����
    int subway_array[3]; // []���� ���ڴ� �� ���� ĭ�� ���� ���̳� -> �� ���� int�� ������ �����ϴ� �迭�� ���� ���̳�
    // [0] [1] [2]
    subway_array[0] = 35;
    subway_array[1] = 45;
    subway_array[2] = 55;

    for(int i = 0; i < 3; i++) {
        printf("there are %d people in line %d subway\n", subway_array[i], i);
    }

    // �� ���� ���
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // ���� �ʱ�ȭ�� �ݵ�� �ؾ� ��
    // �ʱ�ȭ�� ���� ������ ����(������, �� �� ����) ���� ��µȴ�.
    for(int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }

    /*
    // �迭 ũ��� �׻� ����� ����
    int size = 10;
    int arr1[size]; // �迭�� ������ ���� ���ڸ� �־���Ѵ�.
    */
   printf("\n");

   int arr_1[10] = {1, 2}; // 3��° �����ʹ� �ڵ����� '0'���� �ʱ�ȭ ��
   for(int i = 0; i < 10; i++) {
        printf("%d", arr_1[i]);
    }
    
    printf("\n");

    int arr_2[] = {1, 2}; // ũ��� arr[2]�� ����.
    for(int i = 0; i < 2; i++){
        printf("%d", arr_2[i]);
    }

     printf("\n");

    float arr_f[5] = {1.0f, 2.0f, 3.0f};
    for(int i = 0; i < 5; i++){
        printf("%.2f\n", arr_f[i]);
    }

    // ���� vs ���ڿ� (�� ���� vs �� ���� �̻�)
    char c = 'A'; // ������ �ڷ���
    printf("%c\n", c);

    // ���ڿ� ������ '��'�� �ǹ��ϴ� NULL ���� '\0' �� ���ԵǾ�� ��
    // char str[6] = "coding"; // [c] [o] [d] [i] [n] [g] -> 6���� char�� ������ ����
    char str[7] = "coding"; // [c] [o] [d] [i] [n] [g] [\0]
    printf("%s\n", str);

    char str_2[] = "coding";
    printf("%s\n", str_2);
    printf("str_2 ũ�� : %d\n", sizeof(str_2)); // sizeof�� �迭�� ������ ũ�⸦ ��Ÿ����.

    for(int i = 0; i < sizeof(str); i++) {
        printf("%c\n", str[i]); // ����� ���� ����ִ� ���� �ִµ� �� ���� NULL������ �����̴�.
    }

    char kor[] = "�����ڵ�";
    printf("%s\n", kor);
    printf("%d\n", sizeof(kor));
    // ���� 1���� : 1 byte
    // �ѱ� 1���� : 2 byte
    // char ũ�� : 1 byte
    // -> �׷��� ���� �ۼ��� �迭�� ������ ũ��� 9�� ���̴�.

     char c_array[7] = {'c', 'o', 'd', 'i', 'n', 'g', '\0'};
     // char c_array[6] = {'c', 'o', 'd', 'i', 'n', 'g'}; // ��� ���� �̻��ϰ� ���´�.
     printf("%s\n", c_array);

     char c_array_2[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
     // printf("%s\n", c_array_2);
    for(int i = 0; i < sizeof(c_array_2); i++) { // ���� ������ �ִٸ� ���� ���� �ڵ����� ����.
        printf("%c\n", c_array_2[i]);
    }

    for(int i = 0; i < sizeof(c_array_2); i++) {
        printf("%d\n", c_array_2[i]); // ASCII �ڵ� �� ��� (NULL ���� 0���� �Էµ�)
    }

    // ���ڿ� �Է¹ޱ� : ������ ���� ���� ����
    /* char name[256];
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", name, sizeof(name));
    printf("%s\n", name); */
    // -> ����� ������ �����ַ��� : �Է��Ϸ��� ���ڿ����� �˳��ϰ� ũ�⸦ ��� ���� ����.

    // ���� : ASCII �ڵ� ? ANSI (�̱� ǥ����ȸ) ���� ������ ǥ�� �ڵ� ü��
    // 7bit �� 128�� �ڵ� (0 ~ 127�� ���ڷ� ǥ��)
    // a : 97 (���� a�� �ƽ�Ű�ڵ� ������)
    // A : 65
    // 0 : 48
    // -> �������� ����ϴ� ���ڰ� �޶� ȣȯ�� �ȵǾ �� ü�踦 ����.

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

    // ����2 : 0 ~ 127 ������ �ƽ�Ű�ڵ� �������� �ش��ϴ� ���� Ȯ��
    for(int i = 0; i < 128; i++) {
        printf("�ƽ�Ű�ڵ� ���� %d : %c\n", i, i);
    }


    return 0;

}