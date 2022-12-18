#include<stdio.h>
int main()
{
    int  n,r,c=0,c1=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        {
            c++;
        }
        else c1++;
        n=n/10;
    }
    if(c==0) printf("Odd");
    else if(c1==0) printf("Even");
    else printf("Mixed");
}