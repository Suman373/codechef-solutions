#include <stdio.h>
int main(){
	int T,N;
	scanf("%d",&T);
	while(T--){ //test case
		scanf("%d",&N);//taking size of the chessboard 
		printf("%d\n",((N*(N+1)*(N+2))/6)); //for no.of
		// squares with odd will be sum of squares(i.e.,)
		//^2 of natural nos. upto N(size of chessboard)
	}
	return 0;
}