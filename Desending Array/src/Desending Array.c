/*
 ============================================================================
 Name        : Desending.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int temp,L,i,j,V[100];
	setbuf(stdout,NULL);
printf("Enter Array Limit");
scanf("%d",&L);
printf("Enter values");
for(i=0;i<L;i++){
	scanf("%d",&V[i]);
}
for(i=0;i<=L-1;i++){
	for(j=0;j<i;j++){
		if(V[i]>V[j]){
			temp=V[i];
			V[i]=V[j];
			V[j]=temp;
		}
	}
}printf("Sorted values are :\n");
for(i=0;i<L;i++){
	printf("%d\t",V[i]);
}
	return EXIT_SUCCESS;
}
