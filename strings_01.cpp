//objetivo: HPC que lea el nombre de una persona y le indique la longitud de su nombre.
//autor: luis carlos cortez guzman
//fecha: 22/4/22

#include <stdio.h>
#include <string.h>

int main(){
	int longitud;
	char nombre[100];
	//titulo
	printf("*PROGRAMA QUE DICE LA LONGITUD DE TU NOMBRE* \n");
	//optener el nombre
	printf("escribe tu nombre: ");
	gets(nombre);
	//imprimir longitud
	longitud=strlen(nombre);
	printf("tu nombre mide %d caracteres.",longitud);
}
