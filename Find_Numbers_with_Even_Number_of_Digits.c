#include<stdio.h>
int main()
{
    int n,i,c,r,t=0,q;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        q=x[i];
        while(q!=0)
        {
            r=q%10;
            c++;
            q=q/10;
        }
            if(c%2==0) t++;
    }
    printf("%d",t);
}