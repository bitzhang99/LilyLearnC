//(3)	�����A(2 �� 3)��ת�þ���B(3�� 2)��
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int a[2][3]={0};
	int b[3][2]={0};
	int i,j;
	//�����������A
	srand((unsigned)time(NULL));
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			a[i][j]=rand()%(100-1+1);
		}
	}
	//�������A 
	printf("����A��\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//ת�þ����γɾ���B 
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			b[i][j]=a[j][i];
		}
	}
	//�������B
	printf("ת�þ���B\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	} 
	
}
