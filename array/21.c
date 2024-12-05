//请编程生成n×n(n<10)阶方阵。
#include<stdio.h>
void main(){
	int a[10][10]={0};
	int i,t,j,n;
	int p=0,m=1,k=2,q=2;
	int count=1;
	printf("请输入n的取值：");
	scanf("%d",&n);
	t=n;
	for(t=1;t<=2*n-1;t++){
		if(t%4==1){
			if(p<(n/2)+1){
				for(j=p;j<n-p;j++){
					a[p][j]=count++;
				}
				p++;
				continue;
			}
		}
		if(t%4==2){
			for(i=m;i<=n-m;i++){
				a[i][n-m]=count++;
			}
			m++;
			continue;
		}
		if(t%4==3){
			for(j=n-k;j>=k-2;j--){
				a[n-k+1][j]=count++;
			}
			k++;
			continue;
		}
		if(t%4==0){
			for(i=n-q;i>=q-1;i--){
				a[i][q-2]=count++;
			}
			q++;
			continue;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}
	
} 
