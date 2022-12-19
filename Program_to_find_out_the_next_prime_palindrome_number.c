#include<stdio.h>
int prime(int a);
int pil(int b);
int main()
{
    int n,i,c;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(prime(i)==pil(i))
        {
            c=i;
            break;
        }
    }
    printf("%d",c);
    
}
int prime(int a)
{
    int i,ct=0,m=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            ct++;
        }
    }
    if(ct==2){
        m=a;
    }
    return m;
}
int pil(int b)
{
    int q,rem,sum=0;
    q=b;
    while(q!=0)
    {
        rem=q%10;
        sum=sum*10+rem;
        q=q/10;
    }
    return sum;
}