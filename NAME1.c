// For this problem we will be using the array frequency tecnique. This technique is based on iteration through each character
// in the string and store the count in an array which starts with index 0 to 25(26 letters of the alphabets) in their actual
// order ....count [str(i)-97]++ ;  -97 effective way to transform the ASCII of our character to the integer
//  it is mapping i.e., saying that the character a will go to index 0(which will store the frequency of it), b to index1,
// and so on


#include <stdio.h>
#include <string.h>

int main(){
	// int count[26];
	char str[100], ch;
	scanf("%s",&str);
	for(int i=0; i<100;++i){
		ch = str[i];
		if(ch!='\0'){
		printf("%c  ",ch);
		}
		else 
			break;
	}
	return 0;
}