#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int x[n];
    float a,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        s=s+x[i];

    }
    a=s/n;  
    printf("%.2f",a);
}