#include<stdio.h>
int main()
{
    int n,k,m,d;
    scanf("%d%d%d",&n,&k,&m);
    d=k*m;
    if(n%d==0)
    {
        printf("%d",n/d);
    }
    else printf("%d",n/d+1);
}