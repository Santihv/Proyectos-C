#include<stdio.h>

void cambio(int *n1, int *n2);									// la funcion recibe direcciones de memoria

int main(){
	
	int a = 1, b = 2;
	
	printf("Los valores son a = %d, b = %d \n", a, b);
	cambio(&a,&b);												// los & son las direcciones de memoria de a y b
	printf("Los valores cambiados son a = %d, b = %d", a, b);
	
	return(0);
}

void cambio(int *n1, int *n2){
	
	int temp;
	
	temp = *n1;									// 
	*n1 = *n2;
	*n2 = temp;
	
}


/* funcion(array[]){

	cosas de la funcion

}

funcion(array);
*/