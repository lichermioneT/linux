#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

    pid_t id = fork();
    
    if(id == 0)
    {
        // child
        printf("i am a child process,id: %d, ppid: %d\n", getpid(), getppid());
        sleep(5);
        exit(1);
    }
    
    else
    {
        while(1)
        {
            // parent
            printf("i am a  parent  process,id: %d, ppid: %d\n", getpid(), getppid());
            sleep(1);
        }
    }

    return 0;
}

