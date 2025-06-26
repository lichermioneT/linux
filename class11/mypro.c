#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{

    // fork是一个函数
    pid_t  id =  fork(); // 创建一个子进程
   if(id == 0)
   {
     
         printf("我是一个子进程,我的id是： %d, 我的父id是 ：%d \n", getpid(), getppid());
   }
    else if(id  > 0)
    {

        printf("我是一个父进程,我的id是： %d, 我的父id是 ：%d \n", getpid(), getppid());
    }
    
    else
    {

    }
//    while(1)
//  {
//      printf("我是一个进程,我的id是： %d, 我的父id是 ：%d \n", getpid(), getppid());
//      sleep(1);
//    }


    return 0;
}

