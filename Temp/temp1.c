#include<stdio.h>
    int* func(int a,int b)
        {static int c[2];
        c[0]=a;
        c[1]=b;
        return c;}
    int main()
        {int *p=func(1,2);
        printf("%d %d",p[0],p[1]);
        return 0;}