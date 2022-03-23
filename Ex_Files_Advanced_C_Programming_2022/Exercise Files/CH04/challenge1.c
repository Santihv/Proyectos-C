/* Pedir texto
ordenar de A a Z
imprimirlo
 */
 
#include <stdio.h>

int main(){
	
	char texto[50];
	
	printf("Ingrese un texto: ");
	gets(texto);
	
	//printf("%s",texto);
	
	int i,j,k = 0/*,len = sizeof(texto)/sizeof(texto[0])*/;			// len es para obtener el largo de un array
	char temp;
	
	/*length = strlen(texto);*/										// de esta manera tambien se obtiene el largo ocupado del array empleando la lib string.h
	
	while(texto[k] != 0){											// este bucle es para contar el espacio realmente ocupado en el array
		k++;
	}
	
	//printf("\n %i",k);
	
	for(i = 0; i < k; i++){
		for(j = i + 1; j < k; j++){
			if(texto[i] > texto[j]){
				temp = texto[j];
				texto[j] = texto[i];
				texto[i] = temp;
				//printf("%c",texto[j]);
			}
		//printf("%c", texto[i]);
		}
	}
	
	//printf("%c", texto[1]);
	
	printf("Texto ordenado: \n %s", texto);
	
	
	return(0);
}