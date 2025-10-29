#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3, digit4, digit5, length;
    printf("请输入一个不多于5位的正整数：");
    scanf("%d", &num);

    // 提取每一位数字
    digit5 = num / 10000;
    digit4 = (num / 1000) % 10;
    digit3 = (num / 100) % 10;
    digit2 = (num / 10) % 10;
    digit1 = num % 10;

    // 判断位数（使用switch）
    switch (1) {
        case 1:
            if (digit5 != 0) {
                length = 5;
                printf("它是5位数\n");
                printf("各位数字分别是：%d, %d, %d, %d, %d\n", digit5, digit4, digit3, digit2, digit1);
                printf("逆序为：%d%d%d%d%d\n", digit1, digit2, digit3, digit4, digit5);
            } else if (digit4 != 0) {
                length = 4;
                printf("它是4位数\n");
                printf("各位数字分别是：%d, %d, %d, %d\n", digit4, digit3, digit2, digit1);
                printf("逆序为：%d%d%d%d\n", digit1, digit2, digit3, digit4);
            } else if (digit3 != 0) {
                length = 3;
                printf("它是3位数\n");
                printf("各位数字分别是：%d, %d, %d\n", digit3, digit2, digit1);
                printf("逆序为：%d%d%d\n", digit1, digit2, digit3);
            } else if (digit2 != 0) {
                length = 2;
                printf("它是2位数\n");
                printf("各位数字分别是：%d, %d\n", digit2, digit1);
                printf("逆序为：%d%d\n", digit1, digit2);
            } else {
                length = 1;
                printf("它是1位数\n");
                printf("各位数字是：%d\n", digit1);
                printf("逆序为：%d\n", digit1);
            }
            break;
    }

    return 0;
}