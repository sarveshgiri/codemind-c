#include <stdio.h>

int main() 
{
    int i,j,a,b,c=0,n;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=0;
        for(j=1;j<=b;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }   
    if(c==2)
    {
        printf("%d
",i);
    }
       }
   
}