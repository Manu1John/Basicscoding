/*
 ============================================================================
 Name        : FWOWOR2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void positive();
int main(void) {
	positive();
	return EXIT_SUCCESS;
}
void positive(){
	int num;
	setbuf(stdout,NULL);
	printf("Enter a number");
		scanf("%d",&num);
		if(num>-1){
			printf("Positive Number");
		}else{
			printf("Negative Number");
		}

}
