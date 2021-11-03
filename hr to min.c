#include<stdio.h>
void main()
{
	int hr,min,total_min;
	printf("enter hours");
	scanf("%d",&hr);
	printf("enter minutes");
	scanf("%d",&min);
            total_min=min+hr*60;
	printf(" %d minute(s)",total_min,hr,min);
}
