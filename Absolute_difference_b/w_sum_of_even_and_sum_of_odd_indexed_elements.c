#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s=0,a=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+x[i];
        }
        else a=a+x[i];
    }
    printf("%d",abs(s-a));
}