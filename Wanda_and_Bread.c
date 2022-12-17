#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    int c=a*b;
    if(c>=n) printf("YES");
    else printf("NO");
}