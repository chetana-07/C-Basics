#include<stdio.h>
void main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&b>d)
	{
		printf("%d is the largest",a);
	}
	else if(b>a&&b>c&&b>d)
	{
		printf("%d is the largest",b);
	}
	else if(c>a&&c>b&&c>d)
	{
		printf("%d is the largest",c);
	}
	else
	{
		printf("%d is the largest",d);
	}
}
