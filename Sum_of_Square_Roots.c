#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    float sum=0,m;
    for(i=a;i<=b;i++)
    {
        m=sqrt(i);
        sum=sum+m;
    }
    printf("%.2f",sum);
}