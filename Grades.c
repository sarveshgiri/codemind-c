#include<stdio.h>
#include<math.h>
int main()
{
    int p,c,b,m,cs;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    int t=p+c+b+m+cs;
    int per=(t*.002)*100;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80&&per<90)
    {
        printf("Grade B");
    }
    else if(per>=70&&per<80)
    {
        printf("Grade C");
    }
    else if(per>=60&&per<70)
    {
        printf("Grade D");
    }
    else if(per>=40&&per<60)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}