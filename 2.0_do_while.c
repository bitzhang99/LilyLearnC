#include <stdio.h>
#include <stdlib.h>
#include<time.h>
// include 头文件和正文之间有空行，可以看下

int main() {
	int a = 0;
	int b = 0;
	int cnt = 0;
	srand(time(0));
	a = rand() % 101;
	printf("我已经在1-100中选择了一个整数，请猜测："); 
	do{
		scanf("%d", &b);
		cnt++;
		if(a > b) {
			printf("猜小了！"); 
		}
		/*
		此处更好的写法是 else if
		也就是说第一次判断 如果 a>b
		否则 a 应该是 <= b
		这个写法下，你有可能第一次就会猜中，你必须考虑第一次猜中的情况，也会走入循环
		所以，你这地方可以写成 else if(a < b) {
	         xxxxxx
		} 
		接下来的else 可以没有，但良好的程序，为了避免bug，一般最好把else 写全了
		类似于，你分情况讨论，你的把各个分支都得考虑全，这里面之所以不用考虑 else，
		是因为else 就是 a = b，这种情况下，在while 那边 就终止循环了，可以到程序
		外面去处理了
		*/
		if(a < b) {
			printf("猜大了！"); 
		}
	}
	while(a != b);

	printf("恭喜您猜对了,答案就是%d,您用了%d次猜对。",a,cnt); 

	return 0;
} 
	
	
