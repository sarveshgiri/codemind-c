#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count=count+1;
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,t,d1,d2,k,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(k=n;;k++)
        {
            if(prime(k))
            {
                d1=k-n;
                break;
            }
        }
        for(j=n;;j--)
        {
            if(prime(j))
            {
                d2=n-j;
                break;
            }
        }
        if(d1>d2)
        {
            printf("%d
",j);
        }
        else if(d1<d2)
        {
            printf("%d
",k);
        }
        else
        {
            printf("%d
",j);
        }
    }
}