/*
 ============================================================================
 Name        : Function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int void(int,int);
int main(void) {
	int a,b,result;
	setbuf(stdout,NULL)
printf("Enter 2 numbers");
scanf("%d%d",&a,&b);
result=sum(a,b);
printf("Sum is :%d",result);
}
int sum(int n1,int n2){
	int c;
	c=n1+n2;
	return c;
}
