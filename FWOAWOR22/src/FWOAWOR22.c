/*
 ============================================================================
 Name        : FWOAWOR22.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void desending();
int main(void) {
desending();
	return EXIT_SUCCESS;
}
void desending(){
	int L,i,j,v[100],temp;
	setbuf(stdout,NULL);
	printf("Enter the size of array");
	scanf("%d",&L);
	printf("enter the values of array");
	for(i=0;i<L;i++){
		scanf("%d",&v[i]);
	}
	for(i=0;i<L-1;i++){
		for(j=i+1;j<L;j++){
			if(v[i]<v[j]){
				temp=v[i];
				v[i]=v[j];
				v[j]=temp;

			}
		}
	}
	printf("Sorted values are \n");
	for(i=0;i<L;i++){
		printf("%d\n",v[i]);
	}
}
