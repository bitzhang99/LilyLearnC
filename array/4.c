#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void main(){
	char str1[]={"ѧ��\tMT\tEN\tPH\t�ܷ�\tƽ����\t�Ƿ��ھ�ʮ������"};
	char str2[30];
	int a[30][5]={0};
	float b[30];
	int i,j;
	int flag=1;
	
	srand((unsigned)time(NULL));
	for(i=0;i<30;i++){
		a[i][0]=i+1;//ѧ�� 
		for(j=1;j<4;j++){
			a[i][j]=rand()%(100-50+1)+50;//���Ƴɼ� 
			a[i][4]+=a[i][j];//�ܷ� 
			if(a[i][j]<90){
				flag=0;//�ж��Ƿ��ھ�ʮ������ 
			} 
		}
		//�ж�Y/N 
		if(flag==1){
			str2[i]='Y';
		}
		else{
			str2[i]='N';
		}
		b[i]=a[i][4]*1.0/3.0;//ƽ���ּ��� 
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
