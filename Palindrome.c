#include<stdio.h>
int main()
{
    int n,p=0,q;
    scanf("%d",&n);
    q=n;
    while(n!=0)
    {
        p=p*10+n%10;
        n=n/10;
    }
    if(p==q) printf("True");
    else printf("False");
}