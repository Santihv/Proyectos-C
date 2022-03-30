/* - ingrese texto
   - mandar el texto a una función
   - convertir todas las letras a mayus y los espacioes a barras bajas
   - imprimir
*/

#include<stdio.h>
#include<ctype.h>							// lib necesaria para usar toupper();
#include<string.h>							// lib necesaria para usar puts();

void minus_to_mayus(char *text);			// la funcion recibe un puntero como argumento

int main(){
	
	int len = 100;
	char texto[len];
	
	printf("Ingrese texto en minusculas: \n");
	fgets(texto, len, stdin);				// fgets solo permite ingresar 100 caracteres incluyendo el null
	
	minus_to_mayus(texto);					// el nombre del array es un puntero al array
	
	printf("El texto en mayusculas es el siguiente:\n");	
	puts(texto);							// puts imprime strings
	
	
	return(0);
}

void minus_to_mayus(char *text){			// la funcion no retorna porque se esta manipulando directamente las direcciones de memoria
	
	int len = strlen(text);					// strlen obtiene la longitud real de la cadena de caracteres
	
	for(int c = 0; c < len; c++){		
		text[c] = (text[c] == 32) ? 95 : toupper(text[c]);	// si el caracter es un espacio (95 en ASCII), lo sustituye por _; si es una letra
	}														// minus, la sustituye por mayus
	
}