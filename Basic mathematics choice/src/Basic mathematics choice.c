/*
 ============================================================================
 Name        : Basic.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,C,R;
	 setbuf(stdout,NULL);
printf("Enter 2 numbers");
scanf("%d%d",&a,&b);
printf("1 for addition \n2 for Subtraction \n3 for Division \n4 for Multiplication \n Enter your Choice");
scanf("%d",&C);
if(C==1){
	R=a+b;
	printf("Result is:%d",R);
}else if(C==2){
	R=a-b;
	printf("Result is:%d",R);
}else if(C==3){
	R=a/b;
	printf("Result is:%d",R);
}else if(C==4){
	R=a*b;
	printf("Result is :%d",R);
}else{
	printf("You are Fool");
}

	return EXIT_SUCCESS;
}
