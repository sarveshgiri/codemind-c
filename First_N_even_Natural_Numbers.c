#include<stdio.h>
int main()
{
    int n,i,d;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
       d=i*2;
       printf("%d ",d);
    }
}