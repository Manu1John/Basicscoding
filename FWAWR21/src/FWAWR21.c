/*
 ============================================================================
 Name        : FWAWR21.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int evenarray(int);
int main(void) {
	int E,K;
	setbuf(stdout,NULL);
	printf("Enter a limit");
	scanf("%d",&K);
	E=evenarray(K);
	printf("Even numbers in array %d",E);
	return EXIT_SUCCESS;
}
int evenarray(int L){
	int u,y[100],even;

	printf("Enter values");
	for(u=0;u<L;u++)
	{
		scanf("%d",&y[u]);
	}
	for(u=0;u<L;u++)
	{
		if(y[u]%2==0)
		{
			even ++ ;


		}
	}
	return even;
}
