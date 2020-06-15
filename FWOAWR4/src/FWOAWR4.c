/*
 ============================================================================
 Name        : FWOAWR4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int maths();
int main(void) {
	int y;
y=maths();
	return EXIT_SUCCESS;
}
int maths(){
	int z,x,R,c;
	int t;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%d",&z,&x);
	printf("1 for Addition \n2 for subtraction \n3 for Multiplication \n4 for Division \n Enter your Choice");
			scanf("%d",&c);

	if (c==1){
		R=z+x;
		printf("Result is: %d",R);
	}else if(c==2){
		R=z-x;
		printf("Result is: %d",R);
	}else if(c==3){
		R=z*x;
		printf("Result is: %d",R);
	}else if(c==4){
		R=z/x;
		printf("Result is: %d",R);

	}else{
		printf("Are you blind");
}
	return t;
}
