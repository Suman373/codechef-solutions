#include <stdio.h>
int main()
{
	int n,k;
	int T;
	scanf("%d",&T);
	while(T--){

		scanf("%d %d",&n,&k);
		if(n==1){
			if(k==1)
				printf("1\n");
			else
				puts("-1");
		}
		else if (n>1 && k<2){
			puts("-1");
		}
		else{
			for(int i=1;i<k;i++){
				printf("%d ",i);
			}
			for(int i=n;i>=k;i--){
				printf("%d ",i);
			}
		}
		puts("");
	}

}