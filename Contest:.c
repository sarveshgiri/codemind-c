#include<stdio.h>
int main()
{
    int n,x,y,c;
    scanf("%d%d%d",&n,&x,&y);
    c=1*x+2*y;
    if(n<=c) printf("Qualify");
    else printf("Not Qualify");
}