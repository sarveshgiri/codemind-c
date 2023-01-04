#include<stdio.h>
int main()
{
    int n,j;
    char i;
    scanf("%d",&n);
    for(i=n+65-1;i>=65;i--)
    {
        for(j=n;j>=1;j--)
        {
            printf("%c ",i);
        }
        printf("
");
        n--;
    }
}