#include <stdio.h>

int main() {
    int num, a, b, c;
    printf("请输入一个三位正整数：");
    scanf("%d", &num);

    a = num / 100;      
    b = (num / 10) % 10; 
    c = num % 10;       

    if (num == a*a*a + b*b*b + c*c*c) {
        printf("%d是水仙花数\n", num);
    } else {
        printf("%d不是水仙花数\n", num);
    }

    return 0;
}