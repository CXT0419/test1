#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    // 读取输入字符串
    printf("请输入字符串：");
    fgets(str, 100, stdin);
    // 去除fgets读取的换行符
    str[strcspn(str, "\n")] = '\0';

    char *current = str; // 指向当前处理位置的指针
    char *match;         // 存储找到"foo"的位置

    // 循环查找"foo"，直到字符串末尾
    while ((match = strstr(current, "foo")) != NULL) {
        // 用指针替换"foo"为"xxx"
        *match = 'x';
        *(match + 1) = 'x';
        *(match + 2) = 'x';
        // 移动current指针到替换后的下一个位置，避免重复匹配
        current = match + 3;
    }

    // 输出替换后的字符串
    printf("替换结果：%s\n", str);
    return 0;
}