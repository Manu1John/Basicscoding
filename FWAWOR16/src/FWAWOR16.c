/*
 ============================================================================
 Name        : FWAWOR16.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void grade(float,float,float,float,float);
int main(void) {
	float bns,ca,gi,tax,qt;
	setbuf(stdout,NULL);
printf("Enter mark of 5 subjects");
scanf("%f%f%f%f%f",&bns,&ca,&gi,&tax,&qt);
grade(bns,ca,gi,tax,qt);
	return EXIT_SUCCESS;
}
void grade(float b, float c,float g,float t,float q)
{
	float totalmark,percent;
	totalmark=b+c+g+t+q;
	printf("Total mark is :%f \n",totalmark);
	percent=(b+c+g+t+t+q)/5;
	printf("Percentage Is:%f \n",percent);
	if(percent>=90)
	{
		printf("grade A");
	}
	else if(percent>=80)
	{
		printf("grade B");
	}
	else if(percent>=70)
	{
		printf(" Grade C");
	}
	else if(percent>=60)
	{
		printf("Grade D");
	}
	else if(percent>=50)
	{
		printf("grade E");
	}
	else
	{
		printf(" Grade F \n You are fucked");
	}
}
