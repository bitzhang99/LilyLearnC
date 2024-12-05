//(3)	求矩阵A(2 × 3)的转置矩阵B(3× 2)。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int a[2][3]={0};
	int b[3][2]={0};
	int i,j;
	//生成随机矩阵A
	srand((unsigned)time(NULL));
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			a[i][j]=rand()%(100-1+1);
		}
	}
	//输出矩阵A 
	printf("矩阵A：\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//转置矩阵，形成矩阵B 
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			b[i][j]=a[j][i];
		}
	}
	//输出矩阵B
	printf("转置矩阵B\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	} 
	
}
