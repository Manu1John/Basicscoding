/*
 ============================================================================
 Name        : Even.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int V[100],i,L,even=0;
	setbuf(stdout,NULL);
printf("Enter Array Limit");
scanf("%d",&L);
printf("Enter values ");
for(i=0;i<L;i++){
	scanf("%d",&V[i]);
}
for(i=0;i<L;i++){
if(V[i]%2==0){
even++;

}
}
printf("number of even numbers in array %d\n",even);
return EXIT_SUCCESS;
}
