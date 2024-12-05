//(8)	给定某年某月某日，将其转换成这一年的第几天并输出。
#include<stdio.h>
void main(){
	int y,m,d;
	int sum;
	printf("请输入年月日（用空格隔开）");
	scanf("%d %d %d",&y,&m,&d);
	int a[12]={0};
	int i;
	for(i=0;i<12;i++){
		if(i==0||i==2||i==4||i==6||i==7||i==9||i==11){
			a[i]=31;
		}
		else if(i==1){
			continue;
		}
		else{
			a[i]=30;
		}
		
	}
	if(y%4==0 && y%100!=0||y%400==0){
		a[1]=29;
	}
	else{
		a[1]=28;
	}
	for(i=0;i<=m-2;i++){
		sum+=a[i];
	}
	sum+=d;
	printf("这是这一年的第%d天",sum);
	
}
