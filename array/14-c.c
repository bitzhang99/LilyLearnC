#include <stdio.h>

void main() {
    char str[80] = {'\0'};
    int i = 0;

    printf("������ԭʼ���֣�");
    gets(str);

    while (str[i] != '\0') {
        switch (str[i]) {
            case 'a':
                str[i] = 'd';
                break;
            case 'b':
                str[i] = 'w';
                break;
            case 'c':
                str[i] = 'k';
                break;
            case 'd':
                str[i] = ':';
                break;
            case 'e':
                str[i] = 'l';
                break;
            case 'i':
                str[i] = 'a';
                break;
            case 'k':
                str[i] = 'b';
                break;
            case ';':
                str[i] = 'c';
                break;
            case 'w':
                str[i] = 'e';
                break;
            default:
                break;
        }
        i++;
    }

    printf("���ܺ����֣�%s\n", str);
}
