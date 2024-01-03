//objetivo:  HPC que lea dos palabras, e indicar al usuario si las palabras ingresadas son iguales o diferentes.
//autor: luis carlos cortez guzman
//fecha: 22/4/22

#include <stdio.h>
#include <string.h>

int main(){
	int c;
	char a[100],b[100];
	//titulo
	printf("*PROGRAMA QUE COMPARE SI DOS PALABRAS SON IGUALES* \n");
	//leer cadena 1
	printf("Ingresa una palabra: ");
	gets(a);
	//leer cadena 2
	printf("Ingresa otra palabra: ");
	gets(b);
	//comparar cadenas
	c=strcmp(a,b);
	//imprimir 
    if(c==0){
		printf("las dos palabras son iguales ");
	}else{
		printf("las dos palabras son diferentes ");
	}
}
