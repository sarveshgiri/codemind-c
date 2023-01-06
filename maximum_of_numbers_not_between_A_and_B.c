#include<stdio.h>
int main()
{
    int n,i,max=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]>max)
        max=x[i];
    }
    int a,b,k=0;
    scanf("%d%d",&a,&b);
      if(max<a||max>b)
        {
            printf("%d",max);
        }
    else printf("-1");
}