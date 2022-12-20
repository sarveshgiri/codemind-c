#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    while(n!=0)
    {
        n--;
        int a,b,p,i,r,c=0;
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;i++)
        {
           r=i%10;
           if(r==2||r==3||r==9)
           {
               c++;
           }
        }
        printf("%d
",c);
    }
}