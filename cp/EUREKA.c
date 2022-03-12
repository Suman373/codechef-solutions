#include <stdio.h>
#include <math.h>
int main(){
	int T,rounded_val;float N,val;
	//taking input for the test case
	scanf("%d",&T);
	while(T--){
		scanf("%f",&N);
		val=pow((0.143*N),N);
		rounded_val=round(val);
		printf("%d\n",rounded_val);
	}
	return 0;
}


