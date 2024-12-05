//(1)	反向输出有5个元素的int数组中各元素的值。
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
	printf("原始数列：");
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("逆序数列：");
	for(i=4;i>=0;i--){
		printf("%d\t",a[i]);
	}
return 0;
} 
