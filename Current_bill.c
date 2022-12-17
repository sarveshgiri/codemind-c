#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float b,c,s;
    if(n<=199)
    {
        c=1.20;
    }
     else if(n>=200&&n<400)
    {
        c=1.50;
    }
    else if(n>=400&&n<600)
    {
        c=1.80;
    }
    else if(n>=600)
    {
        c=2.00;
    }
    b=n*c;
    if(b<400)
    {
        s=100;
    }
    else
    {
        s=b*0.15;
    }
    float tb=b+s;
    printf("%.2f",tb);
}