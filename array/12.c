//(12)	输入=维数组a[3][5]，打印其中最小值和最大值及其对应的行列位置。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int a[3][5]={0};
	int min,max;
	int i,j;
	int k1,k2,t1,t2;
	srand((unsigned)time(NULL));
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			a[i][j]=rand()%(100-1+1);
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	min=max=a[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			if(a[i][j]>max){
				max=a[i][j];
				k1=i+1;
				k2=j+1;
			}
			if(a[i][j]<min){
				min=a[i][j];
				t1=i+1;
				t2=j+1;
			}
		}
	}
	printf("最大值%d,在第%d行%d列\n",max,k1,k2);
	printf("最小值%d,在第%d行%d列\n",min,t1,t2); 
	
		
} 
