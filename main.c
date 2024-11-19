#include <stdio.h>
int somma(int num);
int main() {
	int numero;
	while(1) {
		printf("Inserisci un numero (0 per uscire): ");
		scanf("%d",&numero);
		if(num==0) break;
		printf("Somma temporanea: %d\n\n",somma(numero));
	}
	printf("Programma chiuso con successo.\n");
}
