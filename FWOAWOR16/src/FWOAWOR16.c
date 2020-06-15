/*
 ============================================================================
 Name        : FWOAWOR16.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void grade();
int main(void) {
grade();
	return EXIT_SUCCESS;
}
void grade(){
	float bns,ca,gi,qt,cma,percentage,totalmark;
	setbuf(stdout,NULL);
	printf("Enter the mark of 5 subject");
	scanf("%f%f%f%f%f",&bns,&ca,&gi,&qt,&cma);
totalmark=bns+ca+gi+qt+cma;
printf("Total mark %f \n",totalmark);
percentage=(bns+ca+gi+qt+cma)/5;
printf("Percentage is: %f \n",percentage);
if(percentage>=90)
{
	printf("A Grade");
}else if(percentage>=80)
{
	printf("B Grade");
}else if(percentage>=70)
{
	printf("C Grade");
}else if(percentage>=60)
{
	printf("D Grade");
}else if(percentage>=50)
{
	printf("E Grade");
}else
{
	printf("Grade F \n You are failed");
}

}
