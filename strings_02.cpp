//objetivo: HPC que lea una frase y la imprima al revés (en espejo).
//autor: luis carlos cortez guzman
//fecha: 22/4/22

#include <stdio.h>
#include <string.h>

int main(){
	char espejo[100],i,n;
	//titulo
	printf("*IMPRESORA EN ESPEJO* \n");
	//leer cadena
	printf("ingresa una frase: ");
	gets(espejo);
	//obtener el numero de casillas para imprimir
	n=strlen(espejo)-1;
	//imprimir caracter por caracter de espejo
	for(i=n;i>=0;i--){
		printf("%c",espejo[i]);
	}
}
