#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int n,j,fact=1;
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            fact=fact*j;
        }
          printf("%d
",fact);
    }
  
}