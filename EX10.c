#include <stdio.h>
#include <stdlib.h>

int main(){

int nmr1, nmr2, soma, sub;
char operacao;

printf("Digite o primeiro número:\n");
scanf("%d", &nmr1);
fflush(stdin);
printf("Digite o segundo número:\n");
scanf("%d", &nmr2);
fflush(stdin);
printf("Digite a operação desejada: + ou -\n");
scanf("%c", &operacao);
fflush(stdin);

system("cls");

switch(operacao){
case '+':
soma = nmr1 + nmr2;
printf("Soma\n%d + %d = %d", nmr1, nmr2, soma);
break;
case '-':
sub = nmr1 - nmr2;
printf("Subtração\n%d - %d = %d", nmr1, nmr2, sub);
break;
default:
printf("INVÁLIDO");
break;
}
return 	0;
}

