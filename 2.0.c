#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
	srand(time(0));
	int a=rand()%101;
	int b=0;
	int cnt=0;
	printf("������ã���1-100����ѡ����һ��������������һ�¡�");
	scanf("%d",&b);
	while(a!=b){
		cnt++;
		if(a>b){
			printf("��С�ˣ�"); 
		}
		if(a<b){
			printf("�´��ˣ�"); 
		}
		printf("���ٲ�һ��");
		scanf("%d",&b); 
		
	}
	while(a=b){
		cnt++;
		printf("��ϲ���¶���,�𰸾���%d,������%d�β¶ԡ�",a,cnt); 
		break;
	} 

	return 0;
}
