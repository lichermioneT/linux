#include <stdio.h>
#include<unistd.h>
#include <sys/types.h>
int main()
{

    pid_t id = fork();
    if(id == 0)
    {
            printf("子进程，pid = %d, ppid = %d, %d\n", getpid(),getppid(),id);
            sleep(2);
    }

    else if(id > 0)
    {

         printf("父进程，pid = %d, ppid = %d, %d\n", getpid(),getppid(),id);
         sleep(2);

    }
    else
    {

    }





    return 0;
}

