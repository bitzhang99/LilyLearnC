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
	printf("���Ѿ���1-100��ѡ����һ����������²⣺"); 
	do{
		scanf("%d",&b);
		cnt++;
		if(a>b){
			printf("��С�ˣ�"); 
		}
		if(a<b){
			printf("�´��ˣ�"); 
		}
	}
	while(a!=b);
	printf("��ϲ���¶���,�𰸾���%d,������%d�β¶ԡ�",a,cnt); 
	return 0;
	} 
	
	
