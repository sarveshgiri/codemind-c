#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n-j+1||j==i)
            {
            printf("x");
            }
            else printf("0");
        }
        printf("
");
    }
}