#include <stdio.h>
#define TRUE 1
#define FALSE 0

int N; // uma casa
char palavra[3000]; // já é um endereco, varias casas
int minimodepalindromos[3000];

int ehpalindromo(int esquerdo, int direito) {

	while(esquerdo < direito) {
		//printf("comparando %c com %c\n", palavra[esquerdo], palavra[direito]);
		if(palavra[esquerdo] != palavra[direito]) {
			return FALSE;
		}
		esquerdo++;
		direito--;
	}

	return TRUE;
}

void imprimevalores() {
	// for(int i = 0; i < N; i++) {
	// 	printf("%c ", palavra[i]);
	// }
	// printf("\n");
	// for(int i = 0; i < N; i++) {
	// 	printf("%d ", minimodepalindromos[i]);
	// }
	// printf("\n\n");
}

int min(int a, int b) {
	if(a<b) {
		return a;
	}
	return b;
}

int main() {
	scanf("%d", &N);
	scanf("%s", palavra);

	for(int i = 0; i <= N; i++) {
		minimodepalindromos[i] = i + 1;
	}

	imprimevalores();
	for(int esquerdo = 0; esquerdo <= N-1; esquerdo++) {
		for(int direito = esquerdo + 1; direito <= N-1; direito++) {
			if(ehpalindromo(esquerdo, direito)) {
				minimodepalindromos[direito] = min(minimodepalindromos[direito], minimodepalindromos[esquerdo - 1] + 1);
			} else {
				minimodepalindromos[direito] = min(minimodepalindromos[direito], minimodepalindromos[direito - 1] + 1);
			}
		}
		imprimevalores();
	}

	printf("%d\n", minimodepalindromos[N-1]);

	return 0;
}







