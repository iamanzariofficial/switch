/*
 ============================================================================
 Name        : vid2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
	printf("1 for chappathi \n2 for dosha \n3 for mandhi \n4 for chaya \nEnter your choice");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("you have selected chappathi");
		break;
	case 2:
		printf("You have selected dosha ");
		break;
	case 3:
		printf("you have selected mandhi");
		break;
	case 4:
		printf("you have selected chaya");
		break;
	default:
		printf("error");

	}

	return EXIT_SUCCESS;
}
