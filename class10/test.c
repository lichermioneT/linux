#include<stdio.h>
#include<time.h>



int addtovalue(int from, int to)
{
    int sum = 0;
    int i = from;
    for( i ; i <= to; i++)
    {
        sum += i;
    }
    return sum;
}

void print(int sum)
{  
     long long  timestamp = time(NULL);

    printf("result = %d, timestamp = %lld\n",sum, timestamp);
}

int main()
{   
    int sum = addtovalue(0, 100);
    print(sum);

    return 0;
}

