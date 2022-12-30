#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,f,c;
    int a,b,ct=0,r,p,e,d,k;
    scanf("%lld",&n);
    p=n;
    a=n%10;
    while(p!=0)
    {
        ct++;
        r=p%10;
         p=p/10;
    }
    b=n/pow(10,(ct-1));
    k=pow(10,(ct-1));
    c=n%k;
    d=c-a;
    e=d+b;
    f=a*(pow(10,ct-1))+e;
    printf("%lld ",f);
    
}