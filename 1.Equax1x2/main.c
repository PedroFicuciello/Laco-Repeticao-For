#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float a,b,c,x1,x2,delta, sqr;
int i;

	for(i=1; i<=5; i++){

	printf("\n Digite o valor de A: ");
	scanf("%f", &a);

	printf("\n Digite o valor de B: ");
	scanf("%f", &b);

	printf("\n Digite o valor de C: ");
	scanf("%f", &c);

	delta = (b * b) - (4 * a * c);
	sqr = sqrt(delta);

if (delta < 0){
	printf("\nO delta e negativo.");
}

	else{
		x1 = (-b + sqr)/(2*a);
		x2 = (-b-sqr)/(2*a);

	printf("\nO valor de x1 da equacao e de: %f",x1);
	printf("\nO valor de x2 da equacao e de: %f \n",x2);
	}
}

system("PAUSE");
return 0;
}
