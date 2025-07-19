#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{

    pid_t id = fork();
    if(id == 0)
    {
        printf(" i am a child procesd. pid: %d , ppid: %d\n", getpid(), getppid());
        sleep(2);
        exit(1);
    }
    else
    {
        while(1)
        {
            printf(" i am a parent    Procesd. pid: %d , ppid: %d\n", getpid(), getppid());
            sleep(1);
        }
    }
    /* printf("hello debug\n"); */
    /* printf("hello debug\n"); */
    /* printf("hello debug\n"); */
    /* printf("hello debug\n"); */
    /* printf("hello debug\n"); */
    /* printf("hello debug\n"); */
    /* printf("hello debug\n"); */
    /* printf("hello debug\n"); */
    /* printf("hello debug\n"); */
    /* printf("hello debug\n"); */
    /* printf("hello debug\n"); */

    return 0;
}

