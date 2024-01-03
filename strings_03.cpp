//objetivo: HPC que lea dos mensajes, los concatene y después imprima un solo mensaje concatenado.
//autor: luis carlos cortez guzman
//fecha: 22/4/22

#include <stdio.h>
#include <string.h>

int main(){
	char a[100],b[100];
	//titulo
	printf("*PROGRAMA QUE CONCATENA MENSAJES* \n");
	//leer cadena 1
	printf("Ingresa una frase: \n");
	gets(a);
	//leer cadena 2
	printf("Ingresa otra frase: \n");
	gets(b);
	//concatenar las dos cadenas
	strcat(a,b);
	//imprimir concatenado
	printf("Tu mensaje concatenado es: \n");
	printf("%s",a);
}
