#include<stdio.h>

int main(){
	
	int num;
	
	printf("Digite un entero: ");
	scanf("%i", &num);
	printf("El numero ingresado con un decimal es %.1f", (float) num);
	
	return(0);
}