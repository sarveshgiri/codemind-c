#include<stdio.h>
int main()
{
    int n,i,c=0,t=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2==0) c++;
        else t++;
    }
    printf("%d %d",c,t);
}