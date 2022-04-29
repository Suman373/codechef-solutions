#include <stdio.h>

int main(void) {
	// your code goes here
	int T,A,B,C,D;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d %d",&A,&B);
	    scanf("%d %d",&C,&D);
	    if((A<=C)&& (B<=D))
	        puts("POSSIBLE");
	    else
	        puts("IMPOSSIBLE");
	}
	return 0;
}
