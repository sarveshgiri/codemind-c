#include <stdio.h>

int main() {
	int arr[10],r=0,n,c=0;
	scanf("%d",&n);
	for(int i=0;i<=9;i++)
	{
	    arr[i]=0;
	}
	while(n!=0){
	    r=n%10;
	    arr[r]=arr[r]+1;
	    n=n/10;
	}
	for(int j=0;j<10;j++){
	    if(arr[j]>1){
	        printf("Not Unique Number");
	        c=1;
	        break;
	    }
	}
	if(c==0){
	    printf("Unique Number");
	}
	return 0;
}