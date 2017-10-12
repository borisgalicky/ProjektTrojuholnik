#include <stdio.h>
#include <math.h>
int main()
{
	float m,v,b;
	printf("BMI calculator 1.0 by Boris98.\nZadaj hmotnost (kg) a vysku (cm):");
	scanf("%f %f",&m,&v);
	b=m/(v*v);
	b=b*10000;
	if (b<20)
		{
		printf("Vase BMI je %f, mate podvahu",b);
		}
	else
		{
		if (b<=25)
			{
			printf("Vase BMI je %f, mate normalnu hmotnost",b);
			}
		else
			{
		 	if (b<=30)
		 		{
		 		printf("Vase BMI je %f, mate nadvahu",b);
				}
			else
				{
				printf("Vase BMI je %f, mate obezitu",b);
				}		
			}
		}
}
