#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define USER "USRE"
#define MY_ENV "myval"
























// 运行时的参数，放在字符指针数组里面
// argc参数的个数，argv参数列表
int main(int argc, char* argv[], char* env[])
/* int main(int argc, char* argv[]) */
{

//    int i = 0;
//  for(i; i < argc; i++)
//    {
//        printf("argv[%d]->%s\n", i, argv[i]);
//    }

// 程序是一样的但是执行的功能不一样的
/*
    if(argc != 2)
    {
        printf("usag:\n\t%s,[-a/-b/-c/-ab/ac/bc]\n",argv[0]);
        return 1;
    }
    
    if(strcmp("-a",argv[1]) == 0)
    {
        printf("功能a\n");
    }

    if(strcmp("-b",argv[1]) == 0)
    {
        printf("功能b\n");
    }

    if(strcmp("-c",argv[1]) == 0)
    {
        printf("功能c\n");
    }

    if(strcmp("-ab",argv[1]) == 0)
    {
        printf("功能ab\n");
    }

    if(strcmp("-ac",argv[1]) == 0)
    {
        printf("功能ac\n");
    }

    if(strcmp("-bc",argv[1]) == 0)
    {
        printf("功能bc\n");
    }
*/



/*
    for(int i = 0; env[i]; i++)
    {
        printf("env[%d]: %s\n",i, env[i]);
    }
*/

//---------------------------------------------------
    /* extern char** environ; */
    /* for(int i = 0; environ[i]; i++) */
    /* { */
    /*     printf("%d: %s\n", i, environ[i]); */
    /* } */


//----------------------------------------------
    /* char* who = getenv("USER"); */
    /* printf("user:%s\n", who); */
    /* if(strcmp(who, "lic") == 0) */
    /* { */
    /*     printf("当前用户就是lic\n"); */
    /* } */
    
    /* char* myenv = getenv("myval"); */

    /* if(myenv == NULL) */
    /* { */
    /*     printf("%s not find\n", MY_ENV); */
    /*     return 1; */
    /* } */

    /* printf("%s = %s\n", MY_ENV, myenv); */


        
// 我写的程序继承了bash的环境变量
    /* printf("%s\n",getenv("PWD")); */


    

// 命令行参数
    /* for(int i = 0; i < argc; i++) */
    /* { */
    /*     printf("argv[%d]:%s\n", i, argv[i]); */
    /* } */

    
    /* if(argc != 2) */
    /* { */
    /*     printf("usage:\n\t %s [-a/-b/-c/-ab/-ac/abc]\n", argv[0]); */
    /*     return 1; */
    /* } */

    /* if(strcmp("-a", argv[1]) == 0) */
    /* { */
    /*     printf("功能a\n"); */
    /* } */

    /* if(strcmp("-b", argv[1]) == 0) */
    /* { */
    /*     printf("功能b\n"); */
    /* } */

    /* if(strcmp("-c", argv[1]) == 0) */
    /* { */
    /*     printf("功能c\n"); */
    /* } */

    /* if(strcmp("-ab", argv[1]) == 0) */
    /* { */
    /*     printf("功能ab\n"); */
    /* } */

    
    /* if(strcmp("-abc", argv[1]) == 0) */
    /* { */
    /*     printf("功能abc\n"); */
    /* } */


/* // 环境变量和命令行参数都是字符数组，结尾null */    
/*     for(int i = 0; env[i]; i++) */
/*     { */
/*         printf("%s \n",env[i]); */
    /* } */


// 指针
// extern char** environ
// 系统初始化好的二级指针
    
// environ[1] == *(envrion + 1)

    extern char** environ;
    for(int i = 0; environ[i]; i++)
    {
        printf("%d:%s \n", i, environ[i]);
    }








































































    return 0;
}

