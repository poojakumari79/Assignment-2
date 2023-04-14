// 5. Write a program to input a three digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
	int x=123,sum=0;
	sum=x%10;
	x=x/10;
	sum=x%10+sum;
	x=x/10;
	sum=x+sum;	
    printf("sum of three number %d",sum);
    return 0;
	
}
