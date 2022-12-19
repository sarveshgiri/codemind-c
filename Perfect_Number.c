#include<stdio.h>
int main()
{
    int n,tc=0,i;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            tc=tc+i;
        }
    }
    if(tc==n)
    {
        printf("True");
    }
    else printf("False");
}