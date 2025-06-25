#include <stdio.h>
#include <unistd.h>
int main()
{

    int i = 10;
    while(i >  0)
    {

        printf("Hello world %d",i);
        fflush(stdout);
        sleep(3);
        --i;
    }




    return 0;
}

