#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float uc,b,t;
    if(n<=199)
    {
        uc=1.20;
    }
    else if(n>=200&&n<400)
    {
        uc=1.50;
    }
    else if(n>=400&&n<600)
    {
        uc=1.80;
    }
    if(n>=600)
    {
        uc=2.00;
    }
    b=uc*n;
    if(b>=400)
    {
        t=b+b*.15;
    }
    else
    {
        t=b+100;
    }
    printf("%.2f",t);
}