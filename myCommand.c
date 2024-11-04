#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>

#define __x64_sys_hello_world 666

int main() {
    char buf[15];  // 用户空间缓冲区

    // 调用系统调用
    long result = syscall(__x64_sys_hello_world, buf);
    if (result == -1) {
        perror("syscall failed");
        return 1;
    }

    // 输出接收到的字符串
    printf("Received from syscall: %s\n", buf);
    return 0;
}
