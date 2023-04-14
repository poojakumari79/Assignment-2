// 4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
	int x=3,y=9;
	x=x+y;
	y=x-y;
	x=x-y;
	printf("swapping of two numbers without using third variable x=%d and y=%d",x,y);
	return 0;
}
