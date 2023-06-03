#include<stdio.h>
int main()
{
    int n,r=0,p,s;
    scanf("%d",&n);
    s=n;
    while(n!=0)
    {
        p=n%10;
        r=r*10+p;
        n=n/10;
    }
    if(r==s)
    {
        printf("True");
    }
    else printf("False");
}