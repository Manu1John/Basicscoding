/*
 ============================================================================
 Name        : FWAWOR10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void searcharray();
int main(void) {
	int L;
	setbuf(stdout,NULL);
printf("Enter a limit");
scanf("%d",&L);
searcharray(L);

	return EXIT_SUCCESS;
}
void searcharray(int k){
	int i,v[100],S,flag=0;
	printf("Enter values");
	for(i=0;i<k;i++)
	{
	scanf("%d",&v[i]);
	}
	printf("Enter a Search Key");
	scanf("%d",&S);
	for(i=0;i<k;i++)
	{
		if(S==v[i])
		{
			flag=1;
			break;

		}
	}
	if(flag==1)
	{
		printf("Value found at position %d",i+1);

	}
	else
	{
		printf("Value not found");
	}
}
