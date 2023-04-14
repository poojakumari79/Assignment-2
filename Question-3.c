// 3. Write a program to swap values of two int variables.
#include<stdio.h>
int main()
{
	int x=5,y=6,temp;
	temp=x;
	x=y;
	y=temp;
	printf("x=%d and y=%d",x,temp);
	return 0;
	
}
