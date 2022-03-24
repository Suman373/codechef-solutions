#include <stdio.h>
#include <string.h>

int solution()
{
	int n,k;
	scanf("%d %d",&n,&k);// length of the bin string and
	char str[1000];
	scanf("%s",str);// entered string is stored in the str

	int low=0;
	int high=n-1;
	int count=0;
	while(high>low){
		if(str[low]!=str[high]) 
			count++;
		low++;high++;
	}
	if(n%2==0){
		if(count<=k)
			puts("yes");
		else
			puts("no");
	}
	else{
		if(count<=k && (k-count)%2==0)
			puts("yes");
		else
			puts("no");
	}
	return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		solution();
	}
	return 0;
}