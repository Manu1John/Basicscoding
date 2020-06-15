/*
 ============================================================================
 Name        : pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l,d,f;
	 setbuf(stdout,NULL);
printf("Enter a limit");
scanf("%d",&l);
for(d=1;d<=l;d++){
	for(f=1;f<d;f++){
		printf("%d",f);
	}
	printf("\n");
}
	return EXIT_SUCCESS;
}
