//(2)	��֪һ���������0�ĵȲ����е�ǰ�����Ϊ26��ǰ����Ļ�Ϊ880��������С�
#include<stdio.h>
// summax = 26 accumulate max = 880
int main(){
	int a, d, i;//�������ƴ���
	int n[4];//����
	int sum = 0;//ǰ����֮�� 
	int accumulate = 1;//ǰ����֮�� 
    //int summax = 324 , accumlatemax = 42981120;
    int summax = 16 , accumlatemax = 256;
	for(d = 0; d <= summax ; d++) { // d can be 0
		for(a = 1; a <= summax; a++) { 
			for(i = 0; i < 4; i++) {
				n[i] = a + (i * d);
				sum += n[i];
				accumulate *= n[i];
                // printf("n[%d] is [%d],sum is [%d ],accumulate is [%d]\n",i, n[i], sum ,accumulate);
                /*
				for(i=0;i<4;i++){
					printf("%d ",n[i]);
				}
    			printf("\n");
                */
				if(sum == summax && accumulate == accumlatemax) {
					for(i = 0; i < 4; i++) {
						printf("%d ",n[i]);
					}
    				printf("d is [%d], a is [%d], sum [%d] accumlate [%d]\n", d, a, sum, accumulate);
				}	
                // printf("d=[%d],a=[%d] %d %d \n", d, a, sum, accumulate);
		    }
			sum=0;
			accumulate=1;
		}
	}
		return 0;
} 
