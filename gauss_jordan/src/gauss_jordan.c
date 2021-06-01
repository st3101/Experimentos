/*
 ============================================================================
 Name        : gauss_jordan.c
 Author      : Santiago Tomas Leonardi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	float array[4];
	float resultado;


	do
	{

	for(int i=0;i<4;i++)
	{
		printf("Ingrese el %d° numero: ",i+1);
		fflush(stdin);
		scanf("%f",&array[i]);
	}

	resultado=((array[0]*array[1])-(array[2]*array[3]))/array[0];

	printf("---------------\nResultado: %.2f\n---------------\n\n",resultado);

	}while(1);

	return EXIT_SUCCESS;
}
