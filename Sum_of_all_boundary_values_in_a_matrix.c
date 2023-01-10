#include<stdio.h>
int main()
{
    int n,m,j,s=0,i;
    scanf("%d%d",&n,&m);
    int x[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0||i==n-1||j==0||j==n-1)
            s=s+x[i][j];
        }
    }
            printf("%d ",s);
}