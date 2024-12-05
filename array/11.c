//(11)	设某班50人，写一程序统计某一单科成绩各分数段的分布人数，每人的成绩随机输入，并要求按下面格式输出统计结果("*"表示实际分布人数)。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int a[50]={0};
	int i,j;
	int b[7]={0};
	char*str1[]={"0-39\t","40-49\t","50-59\t","60-69\t","70-79\t","80-89\t","90-100\t"};
	srand((unsigned)time(NULL));
	for(i=0;i<50;i++){
		a[i]=rand()%101;
		printf("%d\t",a[i]);
		if((i+1)%5==0){
			printf("\n");
		}
	switch(a[i]/10){
		case 1:
		case 2: 
		case 3:b[0]++;break;
		case 4:b[1]++;break;
		case 5:b[2]++;break;
		case 6:b[3]++;break;
		case 7:b[4]++;break;
		case 8:b[5]++;break;
		default:b[6]++;break;
		
	}
		
	}
	printf("\n");
	for(i=0;i<7;i++){
		printf("%s",str1[i]);
		for(j=0;j<b[i];j++){
			printf("*");
		}
		printf("\n");
	}
	
	
}
