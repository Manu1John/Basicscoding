/*
 ============================================================================
 Name        : FWOAWR21.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int oddandeven();
int main(void) {
	int o,e;
	setbuf(stdout,NULL);
	e=oddandeven();
	o=oddandeven();
	printf("odd numbers in array %d",e);

	printf("Even numbers in array %d",o);
	return EXIT_SUCCESS;
}
int oddandeven(){
	int odd,even,L,v[100],i;
	printf("Enter a Limit");
	scanf("%d",&L);
	printf("Enter values");
	for(i=0;i<L;i++){
		scanf("%d",&v[i]);
	}
	for(i=0;i<L;i++){
		if(v[i]%2==0){
			even ++;
		}else{
			odd++;
		}
	}
	return even;
	return odd;
}
