#include <stdio.h>
#include <stdlib.h>

//Este comentario es para tener excusa y hacer un commit
void mostrar(int n, char arreglo[]){
	int i;
	for(i=0;i<n; i++){
		printf("%i.- %s\n", i+1, arreglo);
	}
	
}

int main(){
	int i, n,  numeros[5], suma=0;
	char ar[35];
	
	printf("------------------ Punto 1 --------------------\n\n");
	//Punto 1
	printf("Dame 5 numeros\n");
	for(i=0; i<5; i++){
		printf("Numero %i: ", i+1);
		scanf("%i", &numeros[i]);
	}
	
	printf("\nTus numeros son ");
	for(i=0; i<5; i++){
		printf("%i", numeros[i]);
		suma += numeros[i];
		if(i<4)
			printf(", ");
		else
			printf(".\n");
	}
	printf("\nSu suma es %i\n", suma);
	printf("\nSu promedio es %.2f\n", (float)suma/5);
	
	//Punto 2
	printf("\n\n------------------ Punto 2 --------------------\n\n");
	printf("Escribe un nombre: ");
	scanf("%s", &ar);
	printf("\nCuantas veces quieres imprimir el nombre?: ");
	scanf("%i", &n);
	mostrar(n, ar);
	
	//Punto 3
	printf("\n\n------------------ Punto 3 --------------------\n\n");
	struct personaje{
		char nombre[12], tipo[10];
		int fuerza, salud;
	}x[5];
	for(i=0;i<5;i++){
		printf("Escribe los datos del personaje %i:\n", i+1);
		printf("Nombre: ");
		scanf("%s", &x[i].nombre);
		fflush(stdin);
		printf("Tipo: ");
		scanf("%s", &x[i].tipo);
		fflush(stdin);
		printf("Fuerza(numero): ");
		scanf("%i", &x[i].fuerza);
		fflush(stdin);
		printf("Salud(numero): ");
		scanf("%i", &x[i].salud);
		fflush(stdin);
		printf("\n");		
	}
	printf("Estos son tus personajes:\n");
	for(i=0;i<5;i++){
		printf("Personaje %i:", i+1);
		printf("\nNombre: %s", x[i].nombre);
		printf("\nTipo: %s", x[i].tipo);
		printf("\nFuerza: %i", x[i].fuerza);
		printf("\nSalud: %i", x[i].salud);
		printf("\n");		
	}
	
	return 0;
}
