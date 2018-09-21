#include <stdio.h>
#include <conio.h>
using namespace std;

/*
* Programa: Creacion e impresion de dos matrices 3x3 y su sumatoria
* Fecha: 21 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

//creacion de matriz
void crear(int matriz[3][3]){
	int c, f;
	for(f = 0; f < 3; f++){
		for(c = 0; c < 3; c++){
			scanf("%d", &matriz[f][c]); //almacenacion de datos
		}
	}
}

//se imprime la matriz
void imprimirMatriz(int matriz[3][3]){
	int f, c;
	for(f = 0; f < 3; f++){
		for(c = 0; c < 3; c++){
			printf("%d ", matriz[f][c]);
		}
		printf("\n");
	}
}

//se llaman a las matrices y se hace la sumatoria
void suma(int matriz[3][3], int matriz2[3][3]){
	int f, c;
	printf("\nEsta es la sumatoria: \n");
	for(f = 0; f < 3; f++){
		for(c = 0; c < 3; c++){
			printf("%d ", matriz[f][c] + matriz2[f][c]);
		}
		printf("\n");
	}
}

int main() {
	int mat[3][3], mat2[3][3];
	printf("Ingrese los valores de la primera matriz: \n");
	crear(mat);
	printf("Ingrese los valores de la segunda matriz: \n");
	crear(mat2);
	printf("\nEstos son los valores de la primera matriz: \n");
	imprimirMatriz(mat);
	printf("\nEstos son los valores de la segunda matriz: \n");
	imprimirMatriz(mat2);
	suma(mat, mat2);
	
	return 0;
}

