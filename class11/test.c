#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{   
    while(1)
    {
        printf("我是一个进程,我的ID是%d,父进程的id %d \n", getpid(),getppid());
        sleep(1);
    }


    return 0;
}

