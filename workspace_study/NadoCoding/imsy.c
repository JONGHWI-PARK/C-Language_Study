#include <stdio.h>
#include <string.h>

int main(void) {
    char str[101] = {0};
    
    // EOF end of file -> ������ ��
    while(fgets(str, 101, stdin) != 0) {
        str[strlen(str) - 1] = '\0';
        printf("%s\n", str);
    }
    // ������ ������ ctrl+z (eof -> windows)
    return 0;
}