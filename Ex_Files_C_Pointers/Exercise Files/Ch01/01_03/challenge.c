/* imprimir direcciones de char a e int b
usar %p para imprimir direcciones 
inicializar x y y con las direcciones de las variables
imprimir la direccion almacenada en cada puntero
*/

#include<stdio.h>

int main(){
	
	char a = 'a';
	int b = 5;
	
	printf("Direcciones de a y b: %p %p \n", &a, &b);			// Los & imprimen las direcciones de memoria
	
	char *x;
	int *y;
	
	x = &a;														// los punteros almacenan las direcciones
	y = &b;														// sin el asterisco es la direccion
	
	printf("La direccion de x y de y es: %p %p", x, y);			// sin el asterisco para imprimir las direcciones
	
	return(0);
}