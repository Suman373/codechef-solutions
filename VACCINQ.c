
//@author:suman roy 
//message: could be optimised using recursive functions?
#include <stdio.h>
#include <string.h>
int main(){
	int T,N,P,X,Y;
	scanf("%d",&T);
	while(T--){
	int sum=0;
	scanf("%d %d %d %d ",&N,&P,&X,&Y);
	int arr[110];	
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<P;i++){
		if(arr[i]==0)
			sum=sum+X;
		else 
			sum=sum+Y;
	}
	printf("%d\n",sum);
  }
  
  return 0;
}