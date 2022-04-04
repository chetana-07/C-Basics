#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,edc=0,odc=0;
	scanf("%d", &n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0)edc++;
		else odc++;
		n = n/10;
	}
	printf("even digits:%d\n",edc);
	printf("odd digits:%d\n",odc);
	if(n==edc) printf("completely even");
	else if(n==odc) printf("completely odd");
	else printf("mixed");
}
