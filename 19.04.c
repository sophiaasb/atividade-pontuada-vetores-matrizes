#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

    int i, j;
	char disciplinas[3][250];
	float notas[3][3], soma[3], media[3];
	
	printf("=== Solicitando dados === \n");
	
	for (i = 0; i < 3; i++) {
		printf("Informe a %dª disciplina: ", i+1);
		scanf("%s", &disciplinas[i]);
		
		for (j = 0; j < 3; j++) {
			
			do {
				printf("Informe a %dª nota: ", j+1);
			    scanf("%f", &notas[i][j]);
			
				if (j < 2) {
					soma[i] += (notas[i][j] * 3);
				} else {
					soma[i] += (notas[i][j] * 4);
				}
			
			} while (notas[i][j] < 0 || notas[i][j] > 10);
		
		}
		
		media[i] = soma[i] / 10;
		
		printf("\n");
	
	}
	
	system("cls || clear");
	printf("\n=== Exibindo dados === \n");
	
	for (i = 0; i < 3; i++) {
		
		printf("%iª disciplina: %s \n", i+1, disciplinas[i]);
		
		for (j = 0; j < 3; j++) {
			printf("%iª nota: %.1f \n", i+1, notas[i][j]);
		}
		
		printf("Média: %.1f \n", media[i]);
		printf("\n");
	}
	
	return 0;
}
