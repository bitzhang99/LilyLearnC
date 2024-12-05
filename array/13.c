//(13)	输入5×5的数组，编写程序实现：
//(a)求出对角线上各元素的和；
//(b)求出对角线上行、列下标均为偶数的各元素的积；
//(c)找出对角线上其值最大的元素和它在数组中的位置。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int a[5][5]={0};
	int i,j;
	int s1=0,s2=1,max;
	int k=0,t=0;
	srand((unsigned)time(NULL));
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			a[i][j]=rand()%(10-1)+1;
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	max=a[0][0];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j||i+j==4){
				s1+=a[i][j];	
				if(i%2==0&&j%2==0){
					s2*=a[i][j];
				}
				if(a[i][j]>max){
				max=a[i][j];
				k=i;
				t=j;
				}
			}
		}
	}
	printf("对角线上各元素的和%d\n",s1);
	printf("对角线上行、列下标均为偶数的各元素的积%d\n",s2);
	printf("对角线上其值最大的元素%d,第%d行%d列\n",max,k+1,t+1);
	
	
}

