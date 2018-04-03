#include <stdio.h>

int main() {
	int totaldepares = 0;
	int N;
	scanf("%d", &N);

	int estoqueesquerda[70] = {0};
	int estoquedireita[70] = {0};

	for(int i = 1; i <= N; i++) {
		int tamanho;
		char lado;
		scanf("%d %c", &tamanho, &lado);
		//printf("tamanho=%d lado=%c\n", tamanho, lado);

		if(lado == 'E') {
			// outro lado = direita
			if(estoquedireita[tamanho] > 0) {
				totaldepares++;
				estoquedireita[tamanho]--;
			} else {
				estoqueesquerda[tamanho]++;
			}
		} else {
			// outro lado = esquerda
			if(estoqueesquerda[tamanho] > 0) {
				totaldepares++;
				estoqueesquerda[tamanho]--;
			} else {
				estoquedireita[tamanho]++;
			}
		}
	}
	printf("%d\n", totaldepares);
	return 0;
}




