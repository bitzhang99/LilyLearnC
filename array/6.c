// (6)	��д����ʵ�ֽ��ַ���str2�������ַ���strl��
#include<stdio.h>
#include<string.h>
void main(){
	char str1[80]={"this is a "};
	char str2[]={"C programe."};
	printf("str1 is %s\n",str1);
	printf("str1 is %s\n",str2);
	strcat(str1,str2);
	printf("%s\n",str1);
} 
