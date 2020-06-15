/*
 ============================================================================
 Name        : FWOAWR8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int array();
int main(void) {
	int f;
f=array();

	return EXIT_SUCCESS;
}
int array(){

	int i,L,v[100],g;
	setbuf(stdout,NULL);
	printf("Enter a limit");
	scanf("%d",&L);
	printf("Enter values");
	for(i=0;i<L;i++)
	{
		scanf("%d",&v[i]);
	}
	printf("Entered values are \n");
	for(i=0;i<L;i++){
		printf("%d\t",v[i]);
	}
	return g;
}
