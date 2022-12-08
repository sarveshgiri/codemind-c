#include<stdio.h>
int target(int a,int b,int c,int d)
{
  
    if(a>=10&&b>=10&&c>=10&&d>=10)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int target(int a,int b,int c,int d);
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int x=target(a,b,c,d);
    if(x==1)
    {
        printf("YES");
    }
    else 
    {
        
      printf ("NO");
    }
}