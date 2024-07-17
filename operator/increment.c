#include<stdio.h>

int main()
{
    int a=3,b=4,c,d,e,f;
    c= ++a + b + a++;
    d=c + a + ++b;
    f= ++c + d++;
    printf("%d %d %d ",c,d,f);
      printf("hello world");

    return 0;

}
