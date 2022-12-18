#include<stdio.h>
int main()
{
    int n,r,m;
    scanf("%d",&n);
    while(n>9)
    {
        r=n%10;
        n=n/10;
        n=r+n;
    }
    printf("%d",n);
}