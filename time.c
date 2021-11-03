#include<stdio.h>
void main()
{
	int min,hr,minute;
	printf("enter minutes");
	scanf("%d",&min);
	hr=min/60;
	minute=min%60;
	printf("%d hour(s) and %d minute(s) ",hr,minute);
}
