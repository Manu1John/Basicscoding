/*
 ============================================================================
 Name        : Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int V[100],i,L;
	setbuf(stdout,NULL);
printf("Enter a limit");
scanf("%d",&L);
printf("Enter values");
for(i=0;i<L;i++){
	scanf("%d",&V[i]);
}
printf("Entered Values are: ");
for(i=0;i<L;i++){
	printf("%d\t",V[i]);
}


	return EXIT_SUCCESS;
}
