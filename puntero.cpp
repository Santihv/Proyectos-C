#include<stdio.h>

void cambio(int *n1, int *n2);

int main(){
	
	int a = 1, b = 2;
	
	printf("Los valores son a = %d, b = %d \n", a, b);
	cam
	
	return(0);
}

void cambio(int *n1, int *n2){
	
	int temp;
	
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
	
	
}


/* funcion(array[]){

	cosas de la funcion

}

funcion(array);
*/