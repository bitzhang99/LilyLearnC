//(12)	����=ά����a[3][5]����ӡ������Сֵ�����ֵ�����Ӧ������λ�á�
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
	printf("���ֵ%d,�ڵ�%d��%d��\n",max,k1,k2);
	printf("��Сֵ%d,�ڵ�%d��%d��\n",min,t1,t2); 
	
		
} 
