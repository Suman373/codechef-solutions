#include <stdio.h>

int main(){
	int T; float A,B,C;
	scanf("%d\n",&T);
	while(T>0){
		scanf("%f %f %f",&A,&B,&C);
		if ((A==B+C)||(B==A+C)||(C==A+B)){
			printf("YES\n");}
	    else{
	    	printf("NO\n    	    }
	    T--;
	}
}
