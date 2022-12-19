#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
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
    int a,b,d,i;
    scanf("%d%d",&a,&b);
    for(i=(a+b)+1;;i++)
    {
        if(prime(i))
        {
            d=i-(a+b);
            break;
        }
    }
    printf("%d",d);
    
}