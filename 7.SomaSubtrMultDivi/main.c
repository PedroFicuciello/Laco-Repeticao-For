#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opc, i, n, num;
	
	for(i=1; i<=5; i++){

	printf("Escolha uma das seguintes opcoes: 1: Soma, 2: Subtrair, 3: Multiplicar, 4: Dividir\n");
	printf("Digite a sua opcao: ");
	scanf("%d",&opc);
	
	printf("Digite um valor:");
	scanf("%d",&n);
	
	printf("Digite um valor:");
	scanf("%d",&num);
	
	if(opc==1){
	printf("Seu resultado e: %d \n", (n+num));
	}
	else
	if(opc==2){
		printf("Seu resultado e: %d \n", (n-num ));
	}
	else
	if(opc==3){
		printf("Seu resultado e: %d \n", (n*num));
	}
	else
	if(opc==4){
		printf("Seu resultado e: %d \n", (n/num) );
	}
}
		system("PAUSE");
	return  0 ;
}
