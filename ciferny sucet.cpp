#include <stdio.h>
#include <math.h>
int main()
{
	int x,cs;
	cs=0;
	printf("Zadaj trojciferne cislo:");
	scanf("%d",&x);
	cs=cs+x%10;
	x=x/10;
	cs=cs+x%10;
	x=x/10;
	cs=cs+x;
	printf("Ciferny sucet je %d",cs);
}
