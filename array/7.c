//7
#include <stdio.h>
#include <string.h>

int main() {
    char *weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    char input[20];
    int i;

    printf("请输入英文星期几：");
    scanf("%s", input);

    for (i = 0; i < 7; i++) {
        if (strcmp(input, weekdays[i]) == 0) {
            printf("对应的数字是：%d\n", i + 1);
            break;
        }
    }

    if (i == 7) {
        printf("错误信息：未找到对应的星期几。\n");
    }

    return 0;
}
