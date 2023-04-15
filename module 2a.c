#include<stdio.h>
 int main()

{
	int principal_amount;
	float time, rate, n,simple_interest,compound_interest;
	printf(" enter a value of principal amount :%d \n",principal_amount);
	scanf(" %d",&principal_amount);
	printf("enter a time :%f \n",time);
	scanf("%f",&time);
	printf("enter a rate :%f \n",rate);
	scanf("%f",&rate);
	printf(" enter a value of n : %f \n ",n);
	scanf("%f",&n);
	simple_interest=(principal_amount*rate*time)/100;
	compound_interest=(principal_amount*(rate/time)*n*time);
	printf(" enter a simple interest=%f \n",simple_interest);
	printf(" enter a compound interest =%f \n", compound_interest);
	return 0;
		
}
