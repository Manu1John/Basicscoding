/*
 ============================================================================
 Name        : Multiplication.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int L,n,i;
	 setbuf(stdout,NULL);
printf("Enter a number");
scanf("%d",&n);
printf("Enter a limit");
scanf("%d",&L);
for(i=1;i<=L;i++){


		printf("%d*%d=%d \n",i,n,i*n);
	}

	return EXIT_SUCCESS;
}
