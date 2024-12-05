//20
#include<stdio.h>
void main(){
	int a[800]={0};
	int b[800]={0};
	int i,j=0,k=0,s=0,flag,ex=0,count=0;
	for(i=1;i<2000;i++){
		flag=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag==1){
			a[k++]=i;
		}
	}
	for(k=0;a[k]!=0;k++){
		printf("%d\t",a[k]);
	}
	printf("\n");
	for(k=1;a[k]!=0;k++){
		b[k-1]=a[k]-a[k-1];
	}
	
	for(k=0;a[k]!=0;k++){
			s+=b[k];
		printf("%d\t",b[k]);
	}
	printf("\n");
	for(k=0;b[k]!=0;k++){
		if(b[k]==b[k+1]-1){
			s+=b[k];
			count++;
		}
		if(s==1898){
			printf("存在");
			printf("%d种");
			ex=1;
		}
	}
	if(ex==0){
		printf("不存在"); 
	}
}

