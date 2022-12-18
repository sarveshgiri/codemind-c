#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,s1=0,p,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s1=s1+i;
        p=s1*s1;
        d=i*i;
        sum=sum+d;
        
    }
    printf("%d",abs(p-sum));
}