#include<stdio.h>
int main()
{
    int n,s,d=0,r;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        r=s%10;
        d=d+r;
        s=s/10;
    }
    if(d==n) printf("Neon Number");
    else printf("Not Neon Number");
}