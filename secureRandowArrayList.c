/* 	secureRandowArrayList.c - Gera arquivo com lista de valores aleatórios
	autor: Guilherme Vitorino
	27.03.20 - 09h35min */
	
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void secureRandowArrayList(int option) {
	FILE * pointer_arq;
	pointer_arq = fopen(".\\array-files\\arrayList.DAT", "w");
	
	srand( time(NULL) ); // Garante o gerador de números aleátorios.
	
	int TAM_ARRAY;
	switch( option ) {
		case 49: {					
			TAM_ARRAY = 500;
			int arrayList[TAM_ARRAY];
			int count;
			
			for( count = 0; count < TAM_ARRAY; count++ ) {
				arrayList[count] = rand() % TAM_ARRAY;
			}
			fwrite(arrayList, sizeof(arrayList), 1, pointer_arq );	
					
			break;
		}	
		case 50: {
			TAM_ARRAY = 1000;
			int arrayList[TAM_ARRAY];
			int count;
			
			for( count = 0; count < TAM_ARRAY; count++ ) {
				arrayList[count] = rand() % TAM_ARRAY;
			}
			fwrite(arrayList, sizeof(arrayList), 1, pointer_arq );
		
			break;
		}
			
		case 51: {
			TAM_ARRAY = 1500;
			int arrayList[TAM_ARRAY];
			int count;
			
			for( count = 0; count < TAM_ARRAY; count++ ) {
				arrayList[count] = rand() % TAM_ARRAY;
			}
			fwrite(arrayList, sizeof(arrayList), 1, pointer_arq );
			
			break;
		}
		case 52: {
			TAM_ARRAY = 2000;
			int arrayList[TAM_ARRAY];
			int count;
			
			for( count = 0; count < TAM_ARRAY; count++ ) {
				arrayList[count] = rand() % TAM_ARRAY;
			}
			fwrite(arrayList, sizeof(arrayList), 1, pointer_arq );
			
			break;
		}	
		case 53: { // Erro não suporta TAM_ARRAY > 510.000 	
			printf("\n\n Programa não suporta tamanho maior que 510.000! "
				   "Aguarde futuras atualizações\n"); 
			printf(" Informe o tamanho do array: "); scanf("%li", &TAM_ARRAY);
			
			long int arrayList[TAM_ARRAY];
			
			long long int count;
			for( count = 0; count < TAM_ARRAY; count++ ) {
				arrayList[count] = rand() % TAM_ARRAY;
			}
			fwrite(arrayList, sizeof(arrayList), 1, pointer_arq );
			
			break;
		}
		default: {
				if ( option != 27 ) {
					printf("\a\a\a\n\n Erro, opção '%d' não reconhecida\n", option);
					getch();
				}
					
			break;
		}
	}
	
	fclose(pointer_arq);
	
	if ( option <= 0 && option > 5 );
	else {
		printf("\n\n Arquivo criado com sucesso no endereço [%p]\n"
		" Tamanho da lista de valores: %d ", pointer_arq, TAM_ARRAY);
		getch();
	}		
}

void layoutMenu() {
	system("chcp 1252 > nul");
	system("mode 80, 24");
	int option = -1;	
	
	do{
		system("cls");
		putch('\n'); 
		printf("********************************************************************************\n");
		printf("\t\t\tCria array de valores aleatórios e\n"	  );
		printf("\t\t\tSalva no arquivo \"arrayList.DAT\"\n"	  );
		printf("********************************************************************************\n");
		printf("\t\t           1. Array com 500 valores\n"    );
		printf("\t\t           2. Array com 1000 valores\n"   );
		printf("\t\t           3. Array com 1500 valores\n"   );
		printf("\t\t           4. Array com 2000 valores\n"   );
		printf("\t\t           5. Escolher tamanho do Array\n");
		printf("\t\t           ESC - para sair\n"			  );
		printf("********************************************************************************\n");
		printf(" Selecione o opção desejada [1-5]: ");
		
		option = getche();
		getch();
		
		secureRandowArrayList(option);
	}
	while( option != 27 );
}

int main() {
	layoutMenu();
	
	return 0;
}
