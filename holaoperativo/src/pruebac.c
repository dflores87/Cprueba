/*
 ============================================================================
 Name        : holaoperativo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // fork, exit
#include <sys/wait.h> //wait
#include <sys/types.h>
#include <string.h> //string
#include <commons/temporal.h>


int main(void) {
/*	char* tiempo =temporal_get_string_time();
	puts(tiempo);
	free(tiempo);*/
	Error1();
	return EXIT_SUCCESS;
	
}

void Error1()
{
	printf("Error 1 \n");
	int i;
	char cadena[10];
	char cadena2[10];
	for( i=0;i<10;i++)
	{
		switch(i)
		{
			case 1:
				cadena[i]='A';
				break;
			case 2:
				cadena[i]='B';
				break;
			case 3:
				cadena[i]='C';
				break;
			case 4:
				cadena[i]='D';
				break;
			default:
				cadena[i]='-';

		}
	}
	cadena[9]='\0';
	printf("cadena 1: %s",cadena);
	if(strcmp(cadena2,cadena)==0){
		printf("Genere 2 cadenas iguales!\n");}


}
