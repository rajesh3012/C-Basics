#include<stdio.h>
void main()
{
	
	int n, sum ,even,odd;
	
	n = 55;
    sum = n*(n+1)/2;
    even = n*(n+1);
    odd = (n*n);
	printf("the sum of %d natural numbers is %d\n",n,sum);
	printf("the sum of %d first even numbers is %d\n",n,even);
	printf("the sum of %d the first odd numbers is %d\n",n,odd);
}

