#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int roots(int a, int b, int c)
{
	if(a==0)
	{
		printf("error");
		return 1;
	}
	
	
		int d = (b*b)-(4*a*c);
		double sqrtValue = sqrt(d);
	
	
	if(d>0)
	{
		double ans1 = (double)(-b+sqrtValue)/(2*a);
		double ans2 = (double)(-b-sqrtValue)/(2*a);
		printf("roots are real\n");
		printf("ans: %f \n     %f", ans1, ans2);
	}
	else if(d==0)
	{
		double ans = (double)(-b)/(2*a);
		printf("roots are real and same\n");
		printf("ans: %f", ans);
	}
	else
	{
		printf("roots are complex");
	}
}

int main()
{
	int a, b, c;
	
	printf("enter value of a: ");
	scanf("%d", &a);
	
	printf("enter value of b: ");
	scanf("%d", &b);
	
	printf("enter value of c: ");
	scanf("%d", &c);
	
	printf("\n");
	roots(a, b, c);
	return 0;
}