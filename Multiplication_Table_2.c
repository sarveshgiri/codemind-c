#include<stdio.h>
int main()
{
    int a,b,x,i;
    scanf("%d%d%d",&a,&b,&x);
    for(i=b;i<=x;i++)
    {
      printf("%d x %d = %d
",a,i,i*a);  
    }
}