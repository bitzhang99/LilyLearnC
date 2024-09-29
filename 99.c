#include <stdio.h>

int main() {
    int i,j,n;
    i = 1;
    j = 1;
    n = 9;
    while( i <= n ) {
		i = 1;
		while ( i <= j ) {
        	printf( "%d * %d = %d\t", i, j, i * j);
			i++;
		}
    	j++;
	printf("\n");
    }
    return 0;
}
