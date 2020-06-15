/*
 ============================================================================
 Name        : FWOAWR22.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int desending();
int main(void) {
int x;
x=desendimg();
	return EXIT_SUCCESS;
}
int desending(){
	int i,j,v[100],temp,r,L;
	setbuf(stdout,NULL);
	printf("Enter a limit");
	scanf("%d",&L);
	printf("Enter values");
	for(i=0;i<L;i++){
		scanf("%d",&v[i]);
	}
	for(i=0;i<L-1;i++){
		for(j=i+1;j<L;j++){
			if(v[i]<v[j]){
				temp=v[i];
				v[i]>v[j];
				v[j]=temp;
			}

		}
	}
	printf("Sorted values are \n");
	for(i=0;i<L;i++){
		printf("%d\n",v[i]);
	}
	return r;
}
