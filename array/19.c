//(19)	������A�е�N(0<N<100)��������С�������������ţ�Ҫ���ܸı�����A��Ԫ�ص�˳������ͬ������Ҫ������ͬ�ı�š�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int a[5]={0};
	int b[5]={0};
	int c[5]={0}; 
	int i,j,k,t,min;
	int label=1; 
	srand((unsigned)time(NULL));
	for(i=0;i<5;i++){
		a[i]=rand()%(10-1)+1;
		b[i]=a[i];
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=0;i<4;i++){
		min=b[i];
		t=i;
		for(j=i+1;j<5;j++){
			if(min>b[j]){
				min=b[j];
				t=j;
			}
		}
		k=b[i];
		b[i]=min;
		b[t]=k;
	}
	for(i=0;i<5;i++){
		if(i>0&&b[i]!=b[i-1]){
			label++;
		}
		for(j=0;j<5;j++){
			if(b[i]==a[j]){
				c[j]=label;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d\t",c[i]);
	}
} 
