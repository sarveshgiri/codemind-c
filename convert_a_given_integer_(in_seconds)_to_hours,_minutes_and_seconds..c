#include<stdio.h>
int main()
{
    int n,h,m,s;
    scanf("%d",&n);
    h=n/3600;
    n=n%3600;
    m=n/60;
    s=n%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}