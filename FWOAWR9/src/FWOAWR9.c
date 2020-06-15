/*
 ============================================================================
 Name        : FWOAWR9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sumarray();
int main(void) {
	int k;
	setbuf(stdout,NULL);
k=sumarray();
printf("Sum is: %d",k);
	return EXIT_SUCCESS;
}
int sumarray(){
	int sum=0,i,L,v[100];
	printf("Enter a limit");
	scanf("%d",&L);
	printf("Enter values");
	for(i=0;i<L;i++)
	{
		scanf("%d",&v[i]);
	}
	for(i=0;i<L;i++)
	{
		sum=sum+v[i];
	}
	return sum;
}
