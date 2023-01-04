#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=65;i<=65+n-1;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}