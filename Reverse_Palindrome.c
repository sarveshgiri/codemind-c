#include<stdio.h>
int pal(int n)
{
    int q,r,s=0;
    q=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
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
int rev(int n)
{
    int r,s=0;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}
int main()
{
    int n,a;
    scanf("%d",&n);
    while(n!=0)
    {
    a=n+rev(n);
    if(pal(a)) 
    {
        printf("%d",a);
        break;
    }
    else n=a;
    }
}