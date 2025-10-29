#include <stdio.h>

int main() {
    float score;
    char grade;
    printf("请输入学生成绩（0-100分）：");
    scanf("%f", &score);

    if (score < 0 || score > 100) {
        printf("成绩输入错误，需在0-100之间\n");
    } else {
        if (score >= 90) {
            grade = 'A';
        } else if (score >= 80) {
            grade = 'B';
        } else if (score >= 70) {
            grade = 'C';
        } else if (score >= 60) {
            grade = 'D';
        } else {
            grade = 'E';
        }
        printf("该学生的等级为：%c\n", grade);
    }

    return 0;
}