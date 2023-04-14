// 11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>
int main()
{
	float INR =100,USD=0;
	USD = INR/76.23;
	printf("INR value %.2f and USD value %.2f",INR,USD);
	return 0;
}
