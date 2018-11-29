#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float raio, r,v;
	int i;

	for (i=1; i<=10; i++){
	printf("\nValor de r: ");
	scanf("%f",&raio);
	
	r = 3, 14;
	v = 4 * r *(raio * raio * raio)/3;
	printf("\nO volume da esfera de raio R e %.2f",v);
}
	
	system("PAUSE");
return 0;
}
