#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,r,r1,r2,r3,s=0,s2=0,s3=0,s4=0,p,g,i=0;;
    scanf("%d%d",&n,&a);
    p=n;
    g=0;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
   while(i!=a)
    {
        i++;
        r2=p%10;
        s3=s3*10+r2;
        p=p/10;

    }
    while(g!=a)
    {
        g++;
        r1=s%10;
        s2=s2*10+r1;
        s=s/10;
    
    }
    while(s3!=0)
    {
       r3=s3%10;
        s4=s4*10+r3;
        s3=s3/10;
    }
    printf("%d",abs(s4-s2));
}