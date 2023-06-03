#include<stdio.h>
int pal(int );
int main()
{
    int n,i,c=0,c1=0,p=0,p1=0;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(pal(i))
        {
            c=i-n;
            p=i;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        if(pal(i))
        {
            c1=n-i;
            p1=i;
            break;
        }
    }
    if(c>c1)
    {
        printf("%d",p1);
    }
     else if(c1>c)
    {
        printf("%d",p);
    }
     else 
    {
        printf("%d %d",p1,p);
    }
    
}

int pal(int b)
{
    int q,r,s=0;
    q=b;
    while(b>0)
    {
        r=b%10;
        s=s*10+r;
        b=b/10;
    }
    if(s==q)
    {
    return 1;
    }
    else
    {
        return 0;
    }
}