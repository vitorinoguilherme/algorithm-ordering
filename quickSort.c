/* 	quickSort.c - Método eficiente de ordenação, não estável 
	autor: Guilherme Vitorino
	20.03.20 - 16h44min */
	
#include <stdio.h>

#define TAM_VETOR 10
	
void quickSort(int * vetor, int esquerda, int direita) {
	
	int pivo = esquerda;	// Pivo começa com o valor da posição esquerda.
	int temporaria = 0;
	int contador1;
	int contador2;	
	
	for(contador1 = esquerda + 1; contador1 <= direita; contador1++) {
		contador2 = contador1;	// Contadores tem mesmo valor.
		
		if( vetor[contador2] < vetor[pivo] ) {
			temporaria = vetor[contador2];
			
			while( contador2 > pivo ) {
				vetor[contador2] = vetor[contador2-1];
				contador2--;
			}
			vetor[contador2] = temporaria;
			pivo++;
		}
	}
	
	if( pivo - 1 >= esquerda ) {
		quickSort( vetor, esquerda, pivo-1 );
	}
	if( pivo + 1 <= direita ) {
		quickSort( vetor, pivo+1, direita);
	}
		
}

