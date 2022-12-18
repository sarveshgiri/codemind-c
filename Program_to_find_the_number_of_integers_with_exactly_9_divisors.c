#include<stdio.h>
int main()
{
    int n,i,j,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            d++;
            printf("%d ",i);
        }
    }
    printf("
Total=%d ",d);
}