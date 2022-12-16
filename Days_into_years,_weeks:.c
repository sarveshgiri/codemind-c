#include<stdio.h>
int main()
{
    int n,y,w;
    scanf("%d",&n);
    y=n/365;
    n=n%365;
    w=n/7;
    printf("%d
",y);
    printf("%d
",w);
}