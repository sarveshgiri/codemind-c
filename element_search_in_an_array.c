#include<stdio.h>
int main()
{
    int n,k,i,c=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==x[i])
        {
            c++;
            break;
        }
    }
    if(c!=0) printf("True");
    else printf("False");
}