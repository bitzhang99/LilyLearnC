#include<stdio.h>
void main(){
	int a[3][4]={0};
	int i,j;
	int max=a[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			a[i][j]=rand()%(100-1)+1;
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(a[i][j]>max){
				max=a[i][j];
			}
		}	
	}
	printf("最大元素的值：%d",max);
}
