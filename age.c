#include<stdio.h>
void main()
{
	int age;
	scanf("%d",&age);
	if(age>=18)
	{
		printf("eligible for voting",age);
		
	}
	else
	{
		printf("not eligible for voting",age);
	}
}
