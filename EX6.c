#include <stdio.h>
#include <stdlib.h>

int main(){

int escolha;

printf("Digite o c�digo relacionado ao produto:\n");
printf("1 - Camiseta\n2 - Cal�a\n3 - Sapato\n");
scanf("%d", &escolha);

switch(escolha){
case 1:
printf("\nCAMISETA\nVALOR: R$49,90");
break;
case 2:
printf("\nCAL�A\nVALOR: R$79,90");
break;
case 3:
printf("\nSAPATO\nVALOR: R$60,00");
break;
default:
printf("\nOp��o inv�lida");
break;
}
return 	0;
}

