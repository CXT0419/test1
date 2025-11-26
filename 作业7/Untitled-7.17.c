#include <stdio.h>
#include <string.h>

void replaceFoo(char *str) {
    char *pos;
    
    while ((pos = strstr(str, "foo")) != NULL) {
        *pos = 'x';
        *(pos + 1) = 'x';
        *(pos + 2) = 'x';
        str = pos + 3;
    }
}

int main() {
    char str[100];
    printf("输入字符串：");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    replaceFoo(str);
    printf("替换后：%s\n", str);
    return 0;
}