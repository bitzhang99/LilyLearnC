#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void main(){
	char str1[]={"学号\tMT\tEN\tPH\t总分\t平均分\t是否在九十分以上"};
	char str2[30];
	int a[30][5]={0};
	float b[30];
	int i,j;
	int flag=1;
	
	srand((unsigned)time(NULL));
	for(i=0;i<30;i++){
		a[i][0]=i+1;//学号 
		for(j=1;j<4;j++){
			a[i][j]=rand()%(100-50+1)+50;//各科成绩 
			a[i][4]+=a[i][j];//总分 
			if(a[i][j]<90){
				flag=0;//判断是否在九十分以上 
			} 
		}
		//判断Y/N 
		if(flag==1){
			str2[i]='Y';
		}
		else{
			str2[i]='N';
		}
		b[i]=a[i][4]*1.0/3.0;//平均分计算 
	}
	printf("%s\n",str1);
	for(i=0;i<30;i++){
		for(j=0;j<5;j++){
			printf("%d\t",a[i][j]);
		}
		printf("%.2f\t",b[i]);
		printf("%c\t",str2[i]);
		printf("\n");
	}
}
