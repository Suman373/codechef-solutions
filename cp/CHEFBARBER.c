#include <stdio.h>
int main(){
	int T,N,M;
	scanf("%d",&T);// taking the input for test cases
	while(T--){
		// taking input of both N and M respectively
		scanf("%d %d",&N,&M);
		if(N==0 || M==0){
			puts("0");
		}
		else
			printf("%d",(N*M));
	}
	return 0;
}