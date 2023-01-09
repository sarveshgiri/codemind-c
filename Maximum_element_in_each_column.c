#include<stdio.h>
int main()
{
    int n,i,j,m;
    scanf("%d%d",&n,&m);
    int x[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        scanf("%d",&x[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        int max=0;
        for(i=0;i<n;i++)
        {
            if(x[i][j]>max)
            max=x[i][j];
        }
        printf("%d
",max);
        
    }
}