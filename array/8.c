//(8)	����ĳ��ĳ��ĳ�գ�����ת������һ��ĵڼ��첢�����
#include<stdio.h>
void main(){
	int y,m,d;
	int sum;
	printf("�����������գ��ÿո������");
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
	printf("������һ��ĵ�%d��",sum);
	
}
