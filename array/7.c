//7
#include <stdio.h>
#include <string.h>

int main() {
    char *weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    char input[20];
    int i;

    printf("������Ӣ�����ڼ���");
    scanf("%s", input);

    for (i = 0; i < 7; i++) {
        if (strcmp(input, weekdays[i]) == 0) {
            printf("��Ӧ�������ǣ�%d\n", i + 1);
            break;
        }
    }

    if (i == 7) {
        printf("������Ϣ��δ�ҵ���Ӧ�����ڼ���\n");
    }

    return 0;
}
