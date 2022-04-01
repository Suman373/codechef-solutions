#include <stdio.h>
int main(){
	int t,n,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&k);
		char st[1000];
		scanf("%s",st);
		int i,count=0;
		for(i=0;i<n/2;i++)
		{
			if(st[i] != st[n-i-1])
				count++;
		}
		if(count<=k){
			if(n%2 ==1 )
				puts("yes");
			else if((k-count)%2 ==0)
				puts("yes");
			else
				puts("no");
		}
		else
			puts("No");
   }
	return 0;
}