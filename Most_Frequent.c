#include<stdio.h>
int main()
{
    int n,i,j,c,max=0;
    scanf("%d",&n);
    int x[n],t=0;
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(x[i]==x[j]) c++;
        }
        if(c>t)
        {
            max=x[i];
            t=c;
        }
        if(c==t)
        {
            if(max>x[i]) max=x[i];
        }
    }
    printf("%d",max);
}