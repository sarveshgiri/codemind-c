#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d",&a);
        c=sqrt(a);
        b=c*c;
        if(a==b) printf("True
");
        else printf("False
");
    }

}