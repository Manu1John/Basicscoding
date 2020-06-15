/*
 ============================================================================
 Name        : SwitchSample.c
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
printf("1 for Porotta \n2 for Chappathi \n3 for Manthi \n4 for Biriyani \n Enter your choice  ");
scanf("%d",&C);
if (C==1){
	printf("You have selected Porotta");
}else if(C==2){
	printf("You have selected Chappathi");
}else if(C==3){
	printf("You have selected Manthi");
}else if(C==4){
	printf("You have selected Biriryani");

}else{
	printf("idiot");
}
	return EXIT_SUCCESS;
}
