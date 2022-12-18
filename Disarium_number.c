#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0,p,e,s=0,q;
    scanf("%d",&n);
    p=n;
    q=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        c++;
    }
    while(p!=0)
    {
        e=p%10;
        s=s+pow(e,c);
        p=p/10;
        c--;
    }
    if(s==q) printf("True");
    else printf("False");
}