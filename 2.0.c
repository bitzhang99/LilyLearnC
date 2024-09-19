#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
	srand(time(0));
	int a=rand()%101;
	int b=0;
	int cnt=0;
	printf("玩家您好，在1-100中我选择了一个整数，请您猜一猜。");
	scanf("%d",&b);
	while(a!=b){
		cnt++;
		if(a>b){
			printf("猜小了！"); 
		}
		if(a<b){
			printf("猜大了！"); 
		}
		printf("请再猜一次");
		scanf("%d",&b); 
		
	}
	while(a=b){
		cnt++;
		printf("恭喜您猜对了,答案就是%d,您用了%d次猜对。",a,cnt); 
		break;
	} 

	return 0;
}
