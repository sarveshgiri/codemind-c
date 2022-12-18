#include<stdio.h>
int main()
{
    int n,r=0,p;
    scanf("%d",&n);
    while(n!=0)
    {
        p=n%10;
        r=r*10+p;
        n=n/10;
    }
    printf("%d",r);
}