#include <stdio.h>
#include <conio.h>
using namespace std;

/*
* Programa: Creacion e impresion de matriz 2x5
* Fecha: 21 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

//creacion de matriz
void crear(int matriz[2][5]){
	int c, f;
	for(c = 0; c < 5; c++){
		for(f = 0; f < 2; f++){
			printf("Ingrese los valores de la matriz: ");
			scanf("%d", &matriz[c][f]); //almacenacion de datos
		}
	}
}

//se imprime la matriz
void imprimirMatriz(int matriz[2][5]){
	int f, c;
	printf("\nEstos son los valores de la matriz: \n");
	for(f = 0; f < 2; f++){
		for(c = 0; c < 5; c++){
			printf("%d ", matriz[c][f]);
		}
		printf("\n");
	}
}



int main() {
	int mat[2][5];
	crear(mat);
	imprimirMatriz(mat);
	
	return 0;
}

