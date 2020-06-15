/*
 ============================================================================
 Name        : FWOAWR10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int arraysearch();
int main(void) {
	int i;
	setbuf(stdout,NULL);
i=arraysearch();
	return EXIT_SUCCESS;
}
int arraysearch(){
	int flag=0,d[100],L,i,S;
	printf("Enter a limit");
	scanf("%d",&L);
	printf("Enter values");
	for(i=0;i<L;i++)
	{
		scanf("%d",&d[i]);
	}
	printf("Enter a Search Key");
	scanf("%d",&S);
	for(i=0;i<L;i++)
	{
	if(S==d[i])
	{
		flag=1;
		break;
	}
	}
	if(flag==1)
	{
		printf("value found at position %d",i+1);

	}
	else
	{
		printf("Value not found");
	}
}
