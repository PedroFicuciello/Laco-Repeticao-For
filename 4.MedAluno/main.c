#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float n1, n2, n3, n4, med;
int i;

	for(i=1; i<=5; i++){

	printf("\n1 Bimestre:");
		scanf("%f", &n1);
	printf("\n2 Bimestre:");
		scanf("%f", &n2);
	printf("\n3 Bimestre:");
		scanf("%f", &n3);
	printf("\n4 Bimestre:");
		scanf("%f", &n4);
		
	med = (n1 + n2 + n3 + n4)/4;
	printf("Nota Final: %f \n", med);

	if(med >= 9){
	printf("Aprovado \n");
	}		
	
	else 
	if(med >=7 && med <9){
		printf("Aprovado \n");
	}
	else 
	if(med >=5 && med <7){
		printf("Aprovado \n");
	}
	else 
	if(med >=2.5 && med <5){
		printf("Reprovado \n");
	}
	else 
	if(med <= 2.5){
		printf("Reprovado \n");
	}
}
	
	system("PAUSE");
  return 0;
}
