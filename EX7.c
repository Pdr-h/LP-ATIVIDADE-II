#include <stdio.h>
#include <stdlib.h>

int main(){

int escolha;
char nome[50];
printf("Digite o c�digo relacionado ao servi�o solicitado:\n");
printf("1 - Novo Jogo\n2 - Carreagr Jogo\n3 - Configura��es");
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
printf("CONFIGURA��ES\n");
printf("Brilho\n");
printf("�udio\n");
printf("Idioma");
break;
default:
printf("Op��o inv�lida");
break;
}
return 	0;
}

