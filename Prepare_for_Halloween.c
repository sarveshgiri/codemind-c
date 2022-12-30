#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a*2<b*5) printf("Candy
");
        else if(a*2>b*5) printf("Chocolate
");
        else printf("Either
");
        
    }
}