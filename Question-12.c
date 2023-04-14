/* 12. Write a program to take a three digit number from the user and rotate its digits by
one position towards the right.*/

#include<stdio.h>
int main()
{
	int rem,temp,x;
	printf("enter three digits number");
	scanf("%d",&x);
	rem=x%10;
	temp=x/10;
	x=(rem*100)+temp;
	printf("number after rotating %d",x);
	return 0;
	
}
