/*
Autor: Boris Galick�, 1.N
D�tum: 
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	a=99999;
	while(a%831!=0)
	{
	a=(a-1);
	}
	if (a%831==0)
	{
	printf("%d",a);
	}
}
