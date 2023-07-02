#include<stdio.h>

int primecheck(int num)
{
	if(num%2==0)
	{
		printf("%d is not a prime number", num);
	}
	else
	{
		printf("%d is a prime number", num);
	}
}

int main()
{
	int num;
	printf("enter a number: ");
	scanf("%d", &num);
	primecheck(num);
	return 0;
	
}