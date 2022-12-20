#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,d,c=0;
    scanf("%d%d",&a,&b);
    if(a==1)
    {
        a++;
    }
    for(i=a;i<=b;i++)
    {
    d=0;
    for(j=1;j<=sqrt(i);j++)
      {
        if(i%j==0)
        {
            d++;
        }
      }
    if(d==1)
    {
        c++;
    }
    }
    printf("%d",c);
}