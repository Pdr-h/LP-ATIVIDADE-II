#include <stdio.h>
#include <stdlib.h>

int main(){

int escolha;

printf("Digite o código relacionado ao produto:\n");
printf("1 - Camiseta\n2 - Calça\n3 - Sapato\n");
scanf("%d", &escolha);

switch(escolha){
case 1:
printf("\nCAMISETA\nVALOR: R$49,90");
break;
case 2:
printf("\nCALÇA\nVALOR: R$79,90");
break;
case 3:
printf("\nSAPATO\nVALOR: R$60,00");
break;
default:
printf("\nOpção inválida");
break;
}
return 	0;
}

