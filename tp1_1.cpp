#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//punto 3a
	
	printf("Hola mundo\n");

	//punto 3e
	int variable;
	int *puntero;
	puntero = &variable;

	printf("Contenido del puntero : %d \n", puntero);
	printf("Direccion de memoria almacenada por el puntero: %d \n", &variable );
	printf("Direccion de memoria de la variable: %d \n", &variable);
	printf("Direccion de memoria del puntero: %d \n ", &puntero);
	printf("Tamaño de direccion de memoria utilizado por la variable: %d \n", sizeof(&variable));
	return 0;

}
