#include<stdio.h>
#include<math.h>
int main()
{
    int n,q,r,s=0,p,t,d=0;
    scanf("%d",&n);
    q=pow(n,2);
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    p=pow(s,2);
    while(p!=0)
    {
        t=p%10;
        d=d*10+t;
        p=p/10;
    }
    if(q==d) printf("True");
    else printf("False");
}