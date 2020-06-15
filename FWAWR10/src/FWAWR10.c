/*
 ============================================================================
 Name        : FWAWR10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int arraysearch(int);
int main(void) {
	int L,e;
	setbuf(stdout,NULL);
printf("Enter a limit");
scanf("%d",&L);
e=arraysearch(L);
	return EXIT_SUCCESS;
}
int arraysearch(int l){
	int h,v[100],S,flag=0;
	printf("Enter values");
	for(h=0;h<l;h++)
	{
		scanf("%d",&v[h]);
	}
	printf("Enter a Search Key");
	scanf("%d",&S);
	for(h=0;h<l;h++)
	{
		if(S==v[h])
		{

			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("value found at position %d",h+1);
	}
	else
	{
		printf("Value not found");
	}
	return h;
}
