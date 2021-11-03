#include<stdio.h>
void main()
{
	int side,area,perimeter;
	printf("enter side of a square");
	scanf("%d",&side);
	area=side*side;
	perimeter=4*side;
	printf("area of square with side %d is %d",side,area);
	printf("perimeter of square with side %d is %d",side,perimeter);
	
}
