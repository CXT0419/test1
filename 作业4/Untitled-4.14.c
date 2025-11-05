
#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("请输入第一个正整数：");
    scanf("%d", &num1);
    printf("请输入第二个正整数：");
    scanf("%d", &num2);
    int gcd_result = gcd(num1, num2);
    int lcm_result = num1 * num2 / gcd_result;

    printf("最大公约数：%d\n", gcd_result);
    printf("最小公倍数：%d\n", lcm_result);

    return 0;
}