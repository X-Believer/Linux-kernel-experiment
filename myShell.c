#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_INPUT_SIZE 1024

int main() {
    char input[MAX_INPUT_SIZE];

    while (1) {
        printf("myshell> ");
        fgets(input, MAX_INPUT_SIZE, stdin);
        input[strcspn(input, "\n")] = 0; // 去掉换行符

        if (strcmp(input, "exit") == 0) {
            break; // 输入exit时退出Shell
        }

        system(input); // 执行用户输入的命令
    }
    return 0;
}
