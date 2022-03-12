#include <stdio.h>
int main()
{
	int T,X,Y,Z;
	scanf("%d\n", &T);	
	while(T>0)
	{
		scanf("%d %d %d",&X,&Y,&Z);

		if((Y>Z && Y<X )|| (Y<Z && Z>X &&  X>Y)){
			printf("PIZZA");}
		
		else if((Z>Y && Z<X) ||(Z<Y && Y>X && X>Z)) {
			printf("BURGER");}		
		else {
			printf("NOTHING");}		
	T--;	
	}
	return 0;
}