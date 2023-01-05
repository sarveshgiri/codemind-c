#include<stdio.h>
int pri(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2) return 1;
    else return 0;
}
int main()
{
    int n,i,j,c,t=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=n/i;
            if(pri(i)&&n%i==0&&n%c==0&&pri(c))
            {
                t++;
                break;
            }
            
    }
    if(t==1)printf("%d %d",i,c);
    else printf("-1");
    
}