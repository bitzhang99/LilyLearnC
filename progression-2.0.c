//(2)	已知一个首项大于0的等差数列的前四项和为26，前四项的积为880，求此数列。
#include<stdio.h>
int main(){
	int a,d,i;//首项，公差，计次数
	int n[4];//数组
	int sum=0;//前四项之和 
	int accumulate=1;//前四项之积 
	for(d=1;d<9;d++){
		for(a=1;a<7;a++){ 
			for(i=1;i<5;i++){
				n[i]=a+(i-1)*d;
				sum+=n[i];
				accumulate*=n[i];
				if(i==4){
					if(sum==26&&accumulate==880){
						for(i=1;i<5;i++){
							printf("%d ",n[i]);
						}
					printf("\n");
					}	
					else{
						sum=0;
						accumulate=1;
					}
					
				}
				}
			}
		}
		return 0;
	} 
	

