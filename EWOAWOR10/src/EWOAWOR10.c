/*
 ============================================================================
 Name        : EWOAWOR10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void searcharray();
int main(void) {
searcharray();
	return EXIT_SUCCESS;
}
void searcharray(){
	int p,L,a[100],flag=0,S;
	setbuf(stdout,NULL);
	printf("Enter a limit");
	scanf("%d",&L);
	printf("Enter values");
	for(p=0;p<L;p++)
	{
		scanf("%d",&a[p]);
	}
	printf("Enter a Search key");
	scanf("%d",&S);
		for(p=0;p<L;p++)
		{
			if(S==a[p])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("Value found at position %d",p+1);
		}
		else
		{
			printf("Value not found ");
		}

}
