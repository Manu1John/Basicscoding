/*
 ============================================================================
 Name        : FWAWR3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int lower(int,int);
int main(void) {
	int a,b,k;
	setbuf(stdout,NULL);
printf("Enter 2 numbers");
scanf("%d%d",&a,&b);
k=lower(a,b);
if(a<b){
	printf("Lowest number is: %d",a);
}else{
	printf("Lowest number is :%d",b);
}
	return EXIT_SUCCESS;
}
int lower(int c,int d){
	int f;
	return f;
}
