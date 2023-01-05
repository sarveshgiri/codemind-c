#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]<n) c++;
    }
    if(c==n) printf("YES");
    else printf("NO");
}