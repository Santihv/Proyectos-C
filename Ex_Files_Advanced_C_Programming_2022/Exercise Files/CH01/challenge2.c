/* pedir un num >0 y decir si par o impar*/

#include<stdio.h>

int main(){
	
	int num;
	
	printf("Ingrese un numero entero: ");
	scanf("%i", &num);
	
	printf("El numero es %s", (num % 2 == 0) ? "par" : "impar");
	
	return(0);
}