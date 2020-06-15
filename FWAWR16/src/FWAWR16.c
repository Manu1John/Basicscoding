/*
 ============================================================================
 Name        : FWAWR16.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float grade(float,float,float,float,float);
int main(void) {
printf("Enter your marks");
float ACCA,BNS,CMA,DNA,ECO,F;
setbuf(stdout,NULL);
scanf("%f%f%f%f%f",&ACCA,&BNS,&CMA,&DNA,&ECO);
F=grade(ACCA,BNS,CMA,DNA,ECO);
if(F>=90)
	{
		printf("Grade A");
	}
	else if(F>=80)
	{
		printf("Grade B");
	}
	else if(F>=70)
	{
		printf("Grade C");
	}
	else if(F>=60)
	{
		printf("Grade D");
	}
	else if(F>=50)
	{
		printf("Grade E");
	}
	else
	{
		printf("Grade F \n you are failed");
	}
	return EXIT_SUCCESS;
}
float grade(float a,float b,float c,float d,float e)
{
	float total,percent;
	total=a+b+c+d+e;
	printf("Total mark is: %f \n",total);
	percent=(a+b+c+d+e)/5;
	printf("Percentage is %f\n:",percent);

return percent;

}

