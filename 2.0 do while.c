#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
	int a = 0;
	int b = 0;
	int cnt = 0;
	srand(time(0));
	a=rand()%101;
	printf("我已经在1-100中选择了一个整数，请猜测："); 
	do{
		scanf("%d",&b);
		cnt++;
		if(a>b){
			printf("猜小了！"); 
		}
		if(a<b){
			printf("猜大了！"); 
		}
	}
	while(a!=b);
	printf("恭喜您猜对了,答案就是%d,您用了%d次猜对。",a,cnt); 
	return 0;
	} 
	
	
