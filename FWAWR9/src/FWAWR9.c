/*
 ============================================================================
 Name        : FWAWR9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int arraysum(int);
int main(void) {
	int L,g;
	setbuf(stdout,NULL);
printf("enter a limit");
scanf("%d",&L);
g=arraysum(L);
printf("Sum is: %d",g);
	return EXIT_SUCCESS;
}
int arraysum(int f){
	int i,sum=0,a[100];
	printf("Enter values");
	for(i=0;i<f;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<f;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
