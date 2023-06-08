#include <stdio.h>
int prime(int);
int main() 
{
    int n,i,f,r;
    scanf("%d",&n);
    if(prime(n))
    {
        f=n;
        int t=0,c=0;
        while(n!=0)
        {
            t++;
            r=n%10;
            if(prime(r))
            {
                c++;
            }
            n=n/10;
        }
        if(t==c)
        {
            printf("Mega Prime");
        }
        else{
            printf("Not Mega Prime");
        }
        
}
else
        {
            printf("Not Mega Prime");
        }
    
}
int prime(int x)
{
    int i,c=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            c=c+1;
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