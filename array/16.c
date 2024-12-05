//(16)	已知某运动会上女子百米运动员决赛成绩。要求编写程序，按成绩排序并按名次输出排序结果，包括名次、运动员号、成绩三项内容。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int a[7]={0};
	float b[7]={0};
	float t=0,min;
	int c[7]={0};
	int i,j,k,m,n;
	srand((unsigned)time(NULL));
	for(i=0;i<7;i++){
		a[i]=i+1;
		c[i]=a[i];
		b[i]=16 + (float)rand() / RAND_MAX * 2;
    	b[i]=((int)(b[i] * 100 + 0.5)) / 100.0;
    	printf("%d号\t%.2f\n",a[i],b[i]);
	}
	
	for(i=0;i<7;i++){
		min=b[i];
		for(j=i+1;j<7;j++){
			if(b[j]<min){
				min=b[j];
				m=a[j];
				k=j;
			}
		}
		if(min!=b[i]){
			t=b[i];
			b[i]=min;
			b[k]=t;
			n=c[i];
			c[i]=m;
			c[k]=n;
		}
	}
	for(i=0;i<7;i++){
		printf("第%d名\t",i+1);
		printf("%d号\t%.2f\n",c[i],b[i]);
	}
	
} 
