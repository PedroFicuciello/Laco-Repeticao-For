#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r, alt, vol;
	int i;
	
	for(i=1; i<=10; i++){

	printf("\nInforme o raio: ");
	scanf("%f",&r);

	printf("\nInforme a altura: ");
	scanf("%f",&alt);

	vol =3.14 * (r * r) * alt;
	printf("\nA area externa da lata e %2.f",vol);
}
	system("PAUSE");
return 0;
}
