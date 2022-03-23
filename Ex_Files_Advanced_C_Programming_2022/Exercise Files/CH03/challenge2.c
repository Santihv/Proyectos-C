/*funcion que retorna int
llenar el array con 2, 3, 5, 7 y 9
mostrarlos en el main

*/

#include<stdio.h>

int *arreglo(){
	
	static int array[5] = {2,3,5,7,11};
	
	return (array);
}

int main(){
	
	int i;
	int *array;
	
	array = arreglo();
	for(i=0;i<=sizeof(*array);i++){
		printf("%i\n",array[i]);
	}

	
	return (0);
}