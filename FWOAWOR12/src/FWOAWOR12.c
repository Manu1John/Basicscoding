/*
 ============================================================================
 Name        : FWOAWOR12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void multi();
int main(void) {
multi();
	return EXIT_SUCCESS;
}
void multi(){
	int i,j,v[3][3];
	setbuf(stdout,NULL);
	printf("Enter values");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&v[i][j]);
		}
	}
	printf("Entered values are \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",v[i][j]);
		}
		printf("\n");
	}

}
