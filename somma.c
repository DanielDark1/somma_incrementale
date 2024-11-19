#include <stdio.h>
int somma(int num) {
	static int i=0;
	static temp=0;
	printf("Ciclo ripetuto %d volte.\n",i++);
	return temp+=num;
}
