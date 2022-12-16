#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r=n%100;
    if(r>9)
    {
    printf("%d",r);
    }
    else printf("0%d",r);
}