#include <stdbool.h> 
bool search(int a[], int n, int key) {
    int *p = a;
    while (p < a + n) {
        if (*p == key) {
            return true;
        }
        p++;
    }
    return false;
}