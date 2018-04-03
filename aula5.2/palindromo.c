#include <stdio.h>
#define TRUE 1
#define FALSE 0

char palavra[3000]; // já é um endereco, varias casas

int ehpalindromo(int esquerdo, int direito) {

	while(esquerdo < direito) {
		printf("comparando %c com %c\n", palavra[esquerdo], palavra[direito]);
		if(palavra[esquerdo] != palavra[direito]) {
			return FALSE;
		}
		esquerdo++;
		direito--;
	}

	return TRUE;
}

int main() {
	int N; // uma casa
	scanf("%d", &N);
	scanf("%s", palavra);
	printf("%d %s\n\n", N, palavra);

	if(ehpalindromo(0, N-1)) {
		printf("palindromo!!!\n");
	} else {
		printf("naoooo naooo naooo\n");
	}

	return 0;
}







