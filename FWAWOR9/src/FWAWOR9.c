/*
 ============================================================================
 Name        : FWAWOR9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sumarray(int);
int main(void) {
	int L;
	setbuf(stdout,NULL);
printf("Enter a limit");
scanf("%d",&L);
sumarry(L);
	return EXIT_SUCCESS;
}
void sumarry(int k){
	int sum=0,i,v[100];
	printf("Enter values");
	for(i=0;i<k;i++)
	{
		scanf("%d",&v[i]);
	}
	for(i=0;i<k;i++)
	{
		sum=sum+v[i];
	}
	printf("Sum is: %d",sum);
}
