#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,r,t,s=0,w;
        scanf("%d",&a);
        t=a%10;
        while(a!=0)
        {
            r=a%10;
            s=s*10+r;
            a=a/10;
        }
        w=s%10;
        printf("%d
",w+t);
    }
    
}