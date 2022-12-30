#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a<b) printf("Too Early
");
        else if(a>c) printf("Too Late
");
        else if(a>=b&&a<=c) printf("Take second dose now
");
    }
}