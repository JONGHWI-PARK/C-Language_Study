#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("%d\n", sizeof(array));
    printf("%d\n", sizeof(array[0]));




    return 0;
}