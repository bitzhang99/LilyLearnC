/************************************
Author:  lily
Version: V1.0.0
Created: 2024/9/12
Modified  2024/9/18
Descrption: 
this is a function 
*************************************/

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
