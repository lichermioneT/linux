#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int x = 10;  // 全局变量

int main() {
    pid_t pid = fork();  // 创建子进程

    if (pid == 0) {
        // 子进程
        x = 100;  // 修改全局变量
        printf("子进程: x = %d, 地址 = %p\n", x, (void*)&x);
    } else {
        // 父进程
        sleep(1);  // 等待子进程先输出
        printf("父进程: x = %d, 地址 = %p\n", x, (void*)&x);
    }

    return 0;
}

