#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int id, i;
	
	for(i=1; i<=10; i++){
	
	printf("\nDigite a idade do nadador(a): ");
	scanf("%d", &id);
	
	if(id >= 5 && id <= 7 ){
		printf("Infantil A\n");
	}
	
	if(id >= 8 && id <= 10 ){
		printf("Infantil B\n");
	}
	
	if(id >= 11 && id <= 13 ){
		printf("Juvenil A\n");
	}
	
	if(id >= 14 && id <= 17 ){
		printf("Juvenil B\n");
	}
	
	if(id >= 18 ){	
		printf("Senior\n");
 	}
}
	
		system("PAUSE");
  return 0;
}
