//(9)	如果一个正整数等于其各个数字的立方和，则该数称为阿姆斯特朗数(亦称为自恋性数)。如407=43+03+73就是一个阿姆斯特朗数。试编程求1000以内的所有阿姆斯特朗数。
#include<stdio.h>
void main(){
	int i,j=0,t,k,sum=0;
	int a[1000]={0};
	for(i=1;i<=1000;i++){
		k=i;
		while(k>0){
			t=k%10;
			sum+=t*t*t;
			k/=10;
		}
		if(i==sum){
			a[j]=i;
			j++;
		}
		sum=0;
		
	}
	printf("一千以内阿姆斯特朗数有：\n");
	for(i=j-1;i>=0;i--){
		printf("%d\t",a[i]);
	}
}
