/*
 ============================================================================
 Name        : exam.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float percent,bus,phy,che,bio,eng,totalmark;
	 setbuf(stdout,NULL);
	 printf("Enter mark of five subject " );
	 scanf("%f%f%f%f%f",&bus,&phy,&eng,&che,&bio);
	 totalmark=bus+phy+che+eng+bio;
	 printf("Total mark is:%f \n",totalmark);
	 percent=(bus+phy+che+eng+bio)/5;
	 printf("Your Percentage is %f",percent);
	 printf("\n");

	if(percent>=90){
		printf("A Grade");
	}else if(percent>=80){
		printf("B Grade");
	}else if(percent>=70){
		printf("C Grade");
	}else if(percent>=60){
		printf("D grade");
	}else if(percent>=50){
		printf("E Grade");
	}else{
		printf("You are Faild");
	}

	return EXIT_SUCCESS;
}
