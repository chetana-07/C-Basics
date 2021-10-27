#include<stdio.h>
#include<limits.h>
void main()
{
	printf("Long Long Int:\nSigned:%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("Unsigned:%llu to %llu\n",0,ULONG_LONG_MAX);
	printf("Int:\nSigned:%d to %d\n",INT_MIN,INT_MAX);
	printf("Unsigned:%u to %u\n",0,UINT_MAX);
	printf("Long Int:\nSigned:%ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("Unsigned:%lu to %lu\n",0,ULONG_MAX);
}
