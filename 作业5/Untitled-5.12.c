#include <stdio.h>

#define N 5 
int main() {
    int arr[N];
    int i, j, max_idx, temp;
    printf("输入%d个整数：", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < N - 1; i++) { 
        max_idx = i; 
        for (j = i + 1; j < N; j++) { 
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
    printf("选择法排序结果（从大到小）：");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}