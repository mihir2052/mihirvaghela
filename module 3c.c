#include<stdio.h>
main()
{
	int maths,english ,sci,ss,hindi,total,per;
	printf(" enter a marks of maths :\n ",maths);
	scanf("%d",&maths);
	printf(" enter a marks of english : \n",english);
	scanf("%d",&english);
	printf(" enter a marks of sci:\n",sci);
	scanf("%d",&sci);
	printf("enter a marks of ss: \n",ss);
	scanf("%d",&ss);
	printf("enter a marks of hindi :\n",hindi);
	scanf("%d",&hindi);
	total=(maths +english+sci+ss+hindi);
	printf("enter a total is :%d",total);
	
	per=(total*100)/500;
	printf("\n enter a percentage : %d",per);
	
	if(per>75)
	{
		printf("\n distinction");
	}
	else if (per>60&&per<75)
	{
		printf("\n first class");
	}
	else if (per>50&&per<60)
	{
		printf("\n second class");
	}
	else if(per>35&&per<50)
	{
		printf("\n pass class");
		
	}
	else 
	{
		printf("\n fail");
	}
}
