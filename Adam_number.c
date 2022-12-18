#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,t=0,g,r,s,h=0;
    scanf("%d",&n);
    s=pow(n,2);
    while(n!=0)
    {
        p=n%10;
        t=t*10+p;
        n=n/10;
    }
    g=pow(t,2);
    while(g!=0)
    {
        r=g%10;
        h=h*10+r;
        g=g/10;
    }
    if(s==h) printf("True");
    else printf("False");
}
