#include<stdio.h>
int main()
{
    int e,m,p,c,co,s;
    scanf("%d%d%d%d%d",&e,&m,&p,&c,&co,&s);
    if(e>34&&m>34&&p>34&&c>34&&co>34&&s>34)
    {
        printf("PASSED");
    }
    else printf("FAILED");
}