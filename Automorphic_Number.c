#include<stdio.h>
int main()
{
    int n,j,c=0,s,r,p=0,r1,r2,t=0;
    scanf("%d",&n);
    j=n;
    s=n*n;
    while(n!=0)
    {
        c++;
        r=n%10;
        n=n/10;
    }
    while(c>0)
    {
        r1=s%10;
        p=p*10+r1;
        s=s/10;
        c--;
    }
    while(p!=0)
    {
        r2=p%10;
        t=t*10+r2;
        p=p/10;
    }
    if(t==j) printf("Automorphic Number");
    else printf("Not an Automorphic Number");
}