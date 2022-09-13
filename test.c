#include<stdio.h>

int main() {
    int i,j;
    int a[10];
    scanf("%d", &j);

    for (int i = 0; i < j; ++i) {
        printf("%d", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < j; i++) {
        printf("%d", a[i]);
    }
    return 0;
}