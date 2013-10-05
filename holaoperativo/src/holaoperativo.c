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
#include <commons/temporal.h>

/*int main(void) {
	char* tiempo =temporal_get_string_time();
	puts(tiempo);
	free(tiempo);
	return EXIT_SUCCESS;

	int n=0;
	pid_t pid;
	pid = fork();
	if (pid == 0){
		int i;
		for (i=0;i<10;i++){
			n+=1;
			printf("mensaje %d - soy el hijo\n", n);
		}
		exit(0);
	}else{

		int i;
		for (i=0;i<10;i++){
			n+=1;
			printf("mensaje %d - soy el padre\n", n);
		}
		wait(&pid);
		exit(0);

	}

}*/
