//(16)	��֪ĳ�˶�����Ů�Ӱ����˶�Ա�����ɼ���Ҫ���д���򣬰��ɼ����򲢰�����������������������Ρ��˶�Ա�š��ɼ��������ݡ�
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
    	printf("%d��\t%.2f\n",a[i],b[i]);
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
		printf("��%d��\t",i+1);
		printf("%d��\t%.2f\n",c[i],b[i]);
	}
	
} 
