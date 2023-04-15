#include<stdio.h>
 int main()
{
	int num,i;		
	printf(" enter a value of number is : %d \n ", num);
	scanf("%d",&num);
	
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			printf(" number is not a prime number");
			
		}
		else
		{
			printf(" number is prime number");
		}
	}
	
	
}
