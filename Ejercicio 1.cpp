#include <stdio.h>
#include <conio.h>
using namespace std;

/*
* Programa: Creacion e impresion de matriz 3x4
* Fecha: 21 de septiembre de 2018
* Elaborado por: Natalia Agudelo Valdes
*/

//creacion de matriz
void crear(int matriz[3][4]){
	int f, c;
	for(f = 0; f < 3; f++){
		for(c = 0; c < 4; c++){
			printf("Ingrese los valores de la matriz: ");
			scanf("%d", &matriz[f][c]); //almacenacion de datos
		}
	}
}

//se imprime la matriz
void imprimirMatriz(int matriz[3][4]){
	int f, c;
	printf("\nEstos son los valores de la matriz: \n");
	for(f = 0; f < 3; f++){
		for(c = 0; c < 4; c++){
			printf("%d ", matriz[f][c]);
		}
		printf("\n");
	}
}

//se imprime la primera fila
void fila(int matriz[3][4]){
	int f;
	printf("\nLa primera fila es: ");
	for(f = 0; f < 4; f++){ 
		printf("%d ", matriz[0][f]);
		
	}
}

//se imprime la ultima fila
void filaU(int matriz[3][4]){
	int f;
	printf("\nLa ultima fila es: ");
	for(f = 0; f < 4; f++){ 
		printf("%d ", matriz[2][f]);
		
	}
}

//se imprime la primera columna
void columna(int matriz[3][4]){
	int f;
	printf("\nLa primera columna es: ");
	for(f = 0; f < 3; f++){ 
		printf(" %d", matriz[f][0]); 
		
	}
}

int main() {
	int mat[3][4];
	crear(mat);
	imprimirMatriz(mat);
	fila(mat);
	filaU(mat);
	columna(mat);
	
	
	return 0;
}

