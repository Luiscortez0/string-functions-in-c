//objetivo: HPC que lea una palabra e indique si es palíndroma o no lo es.
//autor: luis carlos cortez guzman
//fecha: 22/4/22

#include <stdio.h>
#include <string.h>

int main(){
	int i,longitud,clon,comparacion;
	char frase[100],espejo[100];
	//titulo
	printf("*palindroma o no? \n");
	//leer cadena
	printf("ingresa una frase: ");
	gets(frase);
	//obtener el numero de la ultima casilla
	longitud=strlen(frase)-1;
	//clon de n jajajaja
	clon=longitud;
	//guardar caracter por caracter de espejo
	for(i=0;i<=longitud;i++){
		espejo[i]=frase[clon];
		clon=clon-1;
	}
	//comparar las dos frases
	comparacion=strcmp(frase,espejo);
	//imprimir si son iguales o diferentes
    if(comparacion==0){
		printf("la palabra es palindroma");
	}else{
		printf("la palabra no es palindroma");
	}
}
