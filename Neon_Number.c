#include<stdio.h>
int main(){
    int n,s,r,t=0;
    scanf("%d",&n);
    s=n*n;
    while(s!=0){
        r=s%10;
        t=t+r;
        s=s/10;
    }
    if(t==n) printf("Neon Number");
    else printf("Not Neon Number");
}