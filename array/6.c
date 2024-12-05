// (6)	±àĞ´³ÌĞòÊµÏÖ½«×Ö·û´®str2¿½±´µ½×Ö·û´®strl¡£
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
