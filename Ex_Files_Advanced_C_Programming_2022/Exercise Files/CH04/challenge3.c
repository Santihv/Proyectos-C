/* code at least two functions, one to fill a structure with data and another to display the structure's data
- have the structure's members include name and age
- prompt the user to input their name and age and display the results
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define len 100

struct Persona{
	char nombre[len];
	int edad;
	float estatura;	
};

struct Persona *alocar_struct(void);
void llenar_struct(struct Persona *p);
void mostrar_struct(struct Persona *p);

int main(){
	
	struct Persona *futbolista;
	
	futbolista = alocar_struct();
	llenar_struct(futbolista);
	mostrar_struct(futbolista);
	
	return(0);
}

struct Persona *alocar_struct(void){
	
	struct Persona *p;
	
	p = (struct Persona *)malloc(sizeof(struct Persona)*1);
	if(p == NULL){
		perror("Incapaz de alocar la estructura");
		exit(1);
	}
	return(p);
	
}

void llenar_struct(struct Persona *p){
		
	printf("Ingrese el nombre: ");
	fgets(p->nombre, len, stdin);
	//scanf("%s",p->nombre);
	printf("\nIngrese la edad: ");
	scanf("%i", &p->edad);
	printf("\nIngrese la estatura en metros: ");
	scanf("%f", &p->estatura);
	
}

void mostrar_struct(struct Persona *p){
	
	printf("Nombre: %s", p->nombre);
	printf("Edad: %i", p->edad); printf("\n");
	printf("Estatura: %.2f", p->estatura);
	
}
