//(1)	���������5��Ԫ�ص�int�����и�Ԫ�ص�ֵ��
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int a[5];
	int i;
	srand((unsigned)time(NULL));
	for(i=0;i<5;i++){
		a[i]=rand()%(100-2+1);
	}
	printf("ԭʼ���У�");
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("�������У�");
	for(i=4;i>=0;i--){
		printf("%d\t",a[i]);
	}
return 0;
} 
