#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,x,arr[100000];
	scanf("%d",&t);
	while(t--){
	    int max=0;
	    scanf("%d %d",&n,&x);
	    for(int i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	        if(arr[i]<x){
	            max=i+1;
	        }
	    }
	    printf("%d\n",max);
	    
	}
	return 0;
}