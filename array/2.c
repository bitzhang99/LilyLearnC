//2
#include<stdio.h>
void main(){
	int i,j;
	int a[5][5]={0};
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			a[i][j]=1;
		}
	}
	for(j=0;j<5;j++){
		for(i=j+1;i<5;i++){
			a[i][j]=a[i-1][j]+1;
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
} 
