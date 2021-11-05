#include<stdio.h>
#include<limits.h>
void main()
{
	   printf("short int:\nsigned:%hd to %hd\n",SHRT_MIN,SHRT_MAX);
	   printf("short int:\nunsigned:%d to %hd\n",0,SHRT_MAX);
	   printf("int:\nsigned:%d to %u",INT_MIN,INT_MAX);
	   printf("int:\nunsigned:%d to %u",0,UINT_MAX);
	   printf("long int \nsigned:%ld to %lu",LONG_MIN,ULONG_MAX);  
	   printf("long int \nunsigned:%ld to %lu",0,ULONG_MAX);  
	   printf("long long int \nsigned:%lld to %llu,",LLONG_MIN,LLONG_MAX);
	   printf("long long int \nunsigned:%lld to %llu,",0,LLONG_MAX);
	   
}
