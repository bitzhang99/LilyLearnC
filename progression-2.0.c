//(2)	��֪һ���������0�ĵȲ����е�ǰ�����Ϊ26��ǰ����Ļ�Ϊ880��������С�
#include<stdio.h>
int main(){
	int a,d,i;//�������ƴ���
	int n[4];//����
	int sum=0;//ǰ����֮�� 
	int accumulate=1;//ǰ����֮�� 
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
	

