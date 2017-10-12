/*
Autor: Boris Galický, 1.N
Dátum: 2.10.2017
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	x=1005;
	while(x%287!=0)
	{
	x=(x+10);
	}
	printf("%d",x);
}
