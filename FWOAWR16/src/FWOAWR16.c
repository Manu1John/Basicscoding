/*
 ============================================================================
 Name        : FWOAWR16.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float grade();
int main(void) {
float g;
g=grade();
if(g>=90)
	{
		printf("Grade A");
	}
	else if(g>=80)
	{
		printf("Grade B");
	}
	else if(g>=70)
	{
		printf("Grade C");
	}
	else if(g>=60)
	{
		printf("Grade D");
	}
	else if(g>=50)
	{
		printf("Grade E");
	}
	else
	{
		printf("Grade f \n You are failed");
	}
	return EXIT_SUCCESS;
}
float grade(){
	float a,b,c,d,e,total,percent;
	setbuf(stdout,NULL);
	printf("Enter your marks");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	printf("Your total mark is %f\n",total);
	percent=(a+b+c+d+e)/5;
	printf("Your percentage is: %f\n",percent);

	return percent;
}
