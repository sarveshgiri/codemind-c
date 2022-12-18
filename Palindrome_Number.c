#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,r,s=0,q;
        scanf("%d",&n);
        q=n;
         while(n!=0)
        {
        r=n%10;
        s=s*10+r;
        n=n/10;
        }
                if(s==q) printf("True
");
                else printf("False
");
    }

}