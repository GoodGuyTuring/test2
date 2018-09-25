/*
 ============================================================================
 Name        : testproject.c
 Author      : Dan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void flush(){
	fflush(stdout);
}
int main(void) {
	int a = 0;
	printf("HALLO\n");
	flush();
	scanf("%i",&a);
	printf("%i\n",a);
	flush();


	return 0;
	//HALLO
}



//ksmcakscklawsmckl
//LALALALAL
