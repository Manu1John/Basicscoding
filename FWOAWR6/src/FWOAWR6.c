/*
 ============================================================================
 Name        : FWOAWR6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int odd();
int main(void) {
	int j;
	setbuf(stdout,NULL);
j=odd();

	return EXIT_SUCCESS;
}
int odd(){
	int L,g;
	printf("Enter a limit");
	scanf("%d",&L);
	for(g=0;g<=L;g++){
		if(g%2==1){
			printf("%d\n",g);
		}
	}return g;
}
