#include<stdio.h>
int main()
{
    int n,p,c=0;
    scanf("%d",&n);
    p=n;
    if(p>0)
    {
        while(p!=0)
        {
          if(p%2==0)
          {
              p=p/2;
          }
          else if(p%3==0)
          {
              p=p/3;
          }
          else if(p%5==0)
          
          {
           p=p/5;   
          }
          else
          {
              c++;
              break;
          }
        }
        if(c=1)
        {
            if(p==1)
            {
                printf("Ugly Number");
            }
            else
            {
                printf("Not Ugly Number");
            }
        }
        else
        {
            printf("Ugly Number");
        }
    }
    else
    {
        printf("Not Ugly Number");
    }
}