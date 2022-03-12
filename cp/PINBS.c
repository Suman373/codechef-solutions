#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int T;char S[100000];int flag=0;
	scanf("%d",&T);
	while(T--){
		scanf("%s",S);
		for(int i=0;i<10000;i++){// iterating through each char of the string S
			if(S[i]=='1'&& (S[i+1]=='1' || S[i+1]=='0'))// for substrings containing prime equivalent we print yes else no
			{											// here we are checking whether there exists 10 or 11 binary					
				flag=1; // flag                         if yes, then it can be 2 or 3, which are prime
				puts("YES\n");
				break;
			}
		}
		if(flag==0) puts("NO\n");// default case where 2 or 3 doesn't exist
	}
	return 0;
}
