#include<stdio.h>
int main()
{
    int n,a,t,r,s=0;
    scanf("%d",&n);
    a=n%1000;
    t=n-a;
    while(a!=0)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    printf("%d",t+s);
}