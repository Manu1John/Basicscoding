/*
 ============================================================================
 Name        : FWOAWOR4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void maths();
int main(void) {
 maths();
	return EXIT_SUCCESS;
}
void maths(){
	int a,b,R,C;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	printf("1 for Addition \n2 for subtraction \n3 for Multiplication \n4 for Division \n Enter your Choice");
	scanf("%d",&C);
	if(C==1){
		R=a+b;
		printf("Result is: %d",R);
	}else if(C==2){
		R=a-b;
		printf("Result is: %d",R);
	}else if(C==3){
		R=a*b;
		printf("Result is: %d",R);
	}else if(C==4){
		R=a/b;
		printf("Result is :%d",R);
	}else{
		printf("Go any anywhere");
	}
}
