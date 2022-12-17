#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float b,c,s;
    if(n<=199)
    {
        c=1.20;
    }
     else if(n>=200&&n<400)
    {
        c=1.40;
    }
    else if(n>=400&&n<600)
    {
        c=1.60;
    }
    else if(n>=600&&n<800)
    {
        c=1.80;
    }
    else if(n>=800)
    {
        c=2.00;
    }
    b=n*c;
    if(b>400)
    {
        s=b*0.15;
    }
    float tb=b+s;
    printf("Units Consumed: %d
",n);
    printf("Cost per Unit: %.2f
",c);
    printf("Bill: %.2f
",b);
    printf("Surcharge: %.2f
",s);
    printf("Total Amount: %.2f
",tb);
}