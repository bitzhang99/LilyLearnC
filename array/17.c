//(17)	������A[2][3]������Ԫ���������A[3][2]�У�ʹ��˳ʱ����ת90�ȡ�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int a[2][3];
	int b[3][2];
	int i,j;
	srand((unsigned)time(NULL));
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			a[i][j]=rand()%(10-1)+1;
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(i==0){
				b[j][1]=a[0][j];
			}
			if(i==1){
				b[j][0]=a[1][j];
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
} 
