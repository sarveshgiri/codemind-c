#include<stdio.h>
int main()
{
    int n,a,b,c,i,ct=0;
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        {
            ct++;
            break;
    }
        a=b;
        b=c;
        }
    if(ct==0) printf("False");
    else printf("True");
}