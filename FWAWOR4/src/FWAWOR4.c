/*
 ============================================================================
 Name        : FWAWOR4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void maths(int,int);
int main(void) {
	int a,b;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	maths(a,b);
	return EXIT_SUCCESS;
}
void maths(int q,int w ){
	int C,R;
	printf("1 for Addition \n2 for subtraction \n3 for Multiplication \n4 for Division \n Enter your Choice");
		scanf("%d",&C);
		if(C==1){
			R=q+w;
			printf("Result is :%d",R);
		}else if(C==2){
			R=q-w;
			printf("Result is :%d",R);
		}else if(C==3){
			R=q*w;
			printf("Result is :%d",R);
		}else if(C==4){
			R=q/w;
			printf("Result is :%d",R);
		}else{
			printf("stand to that side");
		}
}
