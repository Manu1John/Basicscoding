/*
 ============================================================================
 Name        : FWOAWR3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int lowest();
int main(void) {
	int j;
j=lowest();
	return EXIT_SUCCESS;
}
int lowest(){
	int m,n,h;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%d",&m,&n);
	if(m<n){
		printf("Lowest number is: %d",m);
	}else{
		printf("Negative number is: %d",n);
	}return h;
}
