#include <stdio.h>

int main() {
	int posicoes, disco, aviao;
	scanf("%d %d %d", &posicoes, &disco, &aviao);

	if(aviao < disco) {
		printf("%d\n", disco - aviao);
	} else if(aviao == disco) {
		printf("%d\n", 0);
	} else {
		printf("%d\n", posicoes - aviao + 1 + disco - 1);
	}
	return 0;
}







