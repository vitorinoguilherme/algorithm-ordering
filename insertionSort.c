/* 	insertionSort.c - Método simples de ordenação estável
	autor: Guilherme Vitorino
	20.03.20 - 10h56min */

#include <stdio.h>

#define TAM_VETOR 10
 
int insertionSort(int * vetor) {
	int temp, count, count1;

	for(count = 1; count < TAM_VETOR; count++) {

	    temp = vetor[count];
	    count1 = count - 1;
	
	    while( temp < vetor[count1] ) {
	
	        vetor[count1 + 1] = vetor[count1];
	        count1--;
	    }

    	vetor[count1 + 1] = temp;
	}
}  

