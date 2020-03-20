/*	selectionSort.c - Método simples de ordenação não estável 
	autor: Guilherme Vitorino 
	20.03.20 - 15h20min	*/

#include <stdio.h>
	
#define TAM_VETOR 10

void selectionSort(int * vetor) {
	int temp = 0;
	int minimo;
	int count;
	int count1;
	
	for(count = 0; count < TAM_VETOR - 1; count++) {
		minimo = count;
		
		for(count1 = count + 1; count1 <= TAM_VETOR; count1++) {
			if(vetor[count1] < vetor[minimo]) 
				minimo = count1;
		}
			
		temp = vetor[minimo];
		vetor[minimo] = vetor[count];
		vetor[count] = temp;
	}
}

