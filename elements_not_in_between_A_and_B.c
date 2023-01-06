#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int a,b,k=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(x[i]<a||x[i]>b)
        {
            printf("%d ",x[i]);
            k=1;
        }
    }
    if(k==0)
    printf("-1");
}