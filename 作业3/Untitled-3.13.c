#include <stdio.h>
int main() {
    char gender;
    float weight;
    int blood;
    printf("请输入性别（男输入'm'，女输入'f'）和体重（公斤）：");
    scanf("%c%f", &gender, &weight);
    if (gender == 'm') {
        if (weight > 120) {
            blood = 200;
        } else {
            blood = 180;
        }
    } else if (gender == 'f') {
        if (weight > 100) {
            blood = 150;
        } else {
            blood = 120;
        }
    } else {
        printf("性别输入错误！\n");
        return 1;
    }
    printf("输血量为：%d 毫升\n", blood);
    return 0;
}