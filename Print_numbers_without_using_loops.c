#include<stdio.h>
void p(int n,int m)
{
    if(n==m) printf("%d",m);
    else 
    {
        printf("%d ",m);
        m++;
        p(n,m);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int m=1;
    if(n>=1&&n<=1000)
    {
        p(n,m);
    }
    else printf("The Number Series is Not Possible Print");
}