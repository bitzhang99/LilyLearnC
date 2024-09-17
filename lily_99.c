#include <stdio.h>
//�žų˷��� 
int main() {
    int i,j;
    int n;
    i=1;
    j=1;
    printf("这是九九乘法表\n");
    while( j<=9 ) {
        if( i<j ) {
            printf("%d*%d=%d ", i, j, i*j);
            i++;
        }
        else {
            printf("%d*%d=%d\n", i, j, i*j);
            j++;
            i=1;
        }
    }
    return 0;
}
