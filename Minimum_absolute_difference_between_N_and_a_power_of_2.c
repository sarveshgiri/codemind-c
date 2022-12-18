#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,s,i=0,p,d,d1;
    scanf("%d",&n);
    while(n)
    {
        i++;
        p=pow(2,i);
       if(p>n)
       {
           break;
       }
        
    }
   d=pow(2,i)-n;
   d1=n-pow(2,(i-1));
   if(d>d1)
   {
       printf("%d",d1);
   }
   else
   {
       printf("%d",d);
   }
}