/*
 ============================================================================
 Name        : Switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int C;
	 setbuf(stdout,NULL);
printf("1 for Porotta \n2 for Chappathi \n3 for Manthi \n4 for Biriyani \n Enter your Choice");
scanf("%d",&C);
switch(C){
case 1:
	printf("You have selected Porrotta ");
	break ;
case 2:
	printf("You have selected Chappathi");
	break;
case 3:
	printf("You have selected Manthi");
	break;
case 4:
	printf("You have slected Biriyani");
	break;
default:
	printf("Fool!!");


}
	return EXIT_SUCCESS;
}
