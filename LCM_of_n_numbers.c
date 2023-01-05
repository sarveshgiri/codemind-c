#include<stdio.h>
int main()
{
    int n,i,max=0,c=0,j;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]>0)
        max=x[i];
    }
    for(j=max;;j++)
    {
        c=0;
        for(i=0;i<n;i++)
        {
           if(j%x[i]==0)
           c++;
        }
        if(c==n)
        {
            printf("%d",j);
            break;
        }
    }
}