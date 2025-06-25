#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("yan can see me");// 毫无疑问这条语句先执行，
                             // 数据执行了,但是没有被立即输出信息。
                             // sleep期间 printf已经完成打印，对应的数据呢？ 缓冲区里面，今天没有办法解释
    sleep(5);
    return 0;
}

