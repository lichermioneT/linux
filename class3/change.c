#include <stdio.h>
#include  <ctype.h>


// 键盘读取数据，将大写字符转换成 小写字符


int main()
{
    int c;
    while((c = fgetc(stdin)) != EOF)
    {
       c = toupper(c);
       fputc(c, stdout);
    }




    return 0;
}

