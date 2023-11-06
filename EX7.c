#include <stdio.h>
#include <stdlib.h>

int main(){

int escolha;
char nome[50];
printf("Digite o código relacionado ao serviço solicitado:\n");
printf("1 - Novo Jogo\n2 - Carreagr Jogo\n3 - Configurações");
scanf("%d", &escolha);
fflush(stdin);

switch(escolha){
case 1:
printf("NOVO JOGO\n\n");
printf("Digite o Nome do personagem:\n");
gets(nome);
system("cls");
printf("carregando...");
break;
case 2:
printf("CARREGAR JOGO\n");
printf("JULINHO ------ 50%\n");
printf("PREDO   ------ 89%");
break;
case 3:
printf("CONFIGURAÇÕES\n");
printf("Brilho\n");
printf("Áudio\n");
printf("Idioma");
break;
default:
printf("Opção inválida");
break;
}
return 	0;
}

