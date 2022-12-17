#include<stdio.h>
int main()
{
    int a,b,c,m,n,x;
    scanf("%d%d%d",&a,&b,&c);
    m=a+b;
    n=b+c;
    x=a+c;
    if(m>n&&m>x)
    {
        printf("%d",m);
    }
    else if(n>m&&n>x)
    {
        printf("%d",n);
    }
        if(x>n&&x>m)
    {
        printf("%d",x);
    }
}