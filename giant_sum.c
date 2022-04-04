#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,sum=0,sqrt_sum=0,cube_sum=0,gaint_sum=0;
	scanf("%d",&n);
	int t=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		sqrt_sum=sum+r*r;
		cube_sum=sum+r*r*r;
		n=n/10;
	}
	gaint_sum=sum+sqrt_sum+cube_sum;
	printf("sum of digits:%d\n",sum);
	printf("sum of square of digits:%d\n",sqrt_sum);
	printf("sum of cubes of digits:%d\n",cube_sum);
	printf("gaint sum:%d",gaint_sum);
}

	
