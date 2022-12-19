#include<stdio.h>
#include<math.h>
int prime(int x)
{
    int i,c=0;
    for(i=1;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            c++;
        }
    }
    if(c==1)
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
    int n,i,d=0,d1=0;
    scanf("%d",&n);
    if(prime(n))
    {
        printf("0");
    }
    else
    {
    for(i=n+1;;i++)
    {
        if(prime(i))
        {
            d=i-n;
            break;
        }
    }
     for(i=n-1;;i--)
    {
        if(prime(i))
        {
            d1=n-i;
            break;
        }
    }
    if(d>d1)
    {
        printf("%d",d1);
    }
    
//     else if (prime(i))
//     {
//         printf("0");
//     }
     else
    {
        printf("%d",d);
    }
    }
    
    
    
}