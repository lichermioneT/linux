#include "process.h"
void ProcessOn()
{
    int cnt = 0;
    char bar[NUM];
    
    const char* label = "|\\-/";


    memset(bar,'\0', sizeof(bar)); // 里面全部清零

    while(cnt<=100)
    {
        
        printf("[%-100s][%-3d%%][%c] \r",bar, cnt,label[cnt % 4]);
        fflush(stdout);

        bar[cnt++] = STYLE;
        
       // sleep(1);
        usleep(50000);
    }
    
    printf("\n");

}


