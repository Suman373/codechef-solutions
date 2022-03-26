#include <stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int N,X,Y,B=0,flag=0;
		scanf("%d %d %d",&N,&X,&Y);
		int arr[1000];
		// the second line of array is taking the array as input from the user
		for(int i=0;i<N;i++){
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<N;i++){
			scanf("%d",&B);
			if(B-arr[i]==X || B-arr[i]==Y){
				flag=1;}
			else
				flag=0;
		}
		if(flag==1) printf("YEs");
		else printf("No");
	}
	return 0;
}