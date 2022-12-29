#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a%2==0)
        {
            printf("%d
",a/2);
        }
        else 
        {
            printf("%d
",(a/2)+1);
        }
    }
}