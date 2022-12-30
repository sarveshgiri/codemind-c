#include<stdio.h>
int main()
{
    int n,i,j,tem=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]<x[j])
            {
                tem=x[i];
                x[i]=x[j];
                x[j]=tem;
            }
        }
    }
    printf("%d",x[k]+1);
}