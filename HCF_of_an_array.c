#include<stdio.h>
int main()
{
    int n,i,j,min=99999,c;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]<min)
        min=x[i];
    }
    for(i=min;i>=1;i--)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(x[j]%i==0)
            c++;
        }
        if(c==n)
        {
            printf("%d",i);
            break;
        }
    }
}