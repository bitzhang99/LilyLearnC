//(13)	����5��5�����飬��д����ʵ�֣�
//(a)����Խ����ϸ�Ԫ�صĺͣ�
//(b)����Խ������С����±��Ϊż���ĸ�Ԫ�صĻ���
//(c)�ҳ��Խ�������ֵ����Ԫ�غ����������е�λ�á�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	int a[5][5]={0};
	int i,j;
	int s1=0,s2=1,max;
	int k=0,t=0;
	srand((unsigned)time(NULL));
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			a[i][j]=rand()%(10-1)+1;
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	max=a[0][0];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j||i+j==4){
				s1+=a[i][j];	
				if(i%2==0&&j%2==0){
					s2*=a[i][j];
				}
				if(a[i][j]>max){
				max=a[i][j];
				k=i;
				t=j;
				}
			}
		}
	}
	printf("�Խ����ϸ�Ԫ�صĺ�%d\n",s1);
	printf("�Խ������С����±��Ϊż���ĸ�Ԫ�صĻ�%d\n",s2);
	printf("�Խ�������ֵ����Ԫ��%d,��%d��%d��\n",max,k+1,t+1);
	
	
}

