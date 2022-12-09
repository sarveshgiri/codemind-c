#include<stdio.h>
int main()
{
    int i,p=1;
    int a[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        p=p*a[i];
    }
    printf("%dKB",p);
}