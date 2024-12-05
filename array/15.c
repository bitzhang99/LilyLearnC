//(15)	使用二维数组输入"BASIC"，"ADA"，"Pascal"，"C"，"Fortran"，将它们按从小到大的顺序排列后输出。 
#include<stdio.h>
#include<string.h> 
void main(){
	char str1[5][10]={"BASIC","ADA","Pascal","C","Fortran"};
	char str2[5][10]={'0'};
	int a[5];
	int i=0,j=0,t,k,min;
	for(i=0;i<5;i++){
		for(j=0;str1[i][j]!='\0';j++){
			a[i]+=str1[i][j];
		}
	}
	for(i=0;i<4;i++){
		min=a[i];
		t=i;
		for(j=i+1;j<5;j++){
			if(a[j]<min){
				min=a[j];
				t=j;
			}
		}
		k=a[i];
		a[i]=min;
		a[t]=k;
		strcpy(str2[i], str1[t]);
        strcpy(str1[t], str1[i]);
        strcpy(str1[i], str2[i]);
	}
	for(i=0;i<5;i++){
		printf("%s\n",str1[i]);
	}
}
