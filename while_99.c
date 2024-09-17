#include <stdio.h>

int main() {
    int i = 1, j;

    while (i <= 9) {
        j = 1;
        while (j <= i) {
            printf("%d*%d=%-2d  ", j, i, i*j); // 使用%-2d保持对齐
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
