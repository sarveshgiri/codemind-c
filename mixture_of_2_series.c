#include<stdio.h>
int main()
{
    int n,i,p,k1=0,r,k2=0;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            p=2*k1;
            printf("%d ",p);
            k1++;
        }
        else
        {
            r=1*k2;
            printf("%d ",r);
            k2++;
        }
    }
}