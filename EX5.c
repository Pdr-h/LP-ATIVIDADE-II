#include <stdio.h>
#include <stdlib.h>

int main(){

int idioma;
char nome[50];

printf("Digite seu nome:\n");
gets(nome);
printf("Idioma de prefência:\n1 - Inglês\n2 - Espanhol\n3 - Francês");
scanf("%d", &idioma);

switch(idioma){
case 1: 
printf("Welcome, %s", nome);
break;
case 2: 
printf("Bien vindo, %s", nome);
break;
case 3: 
printf("Accueillir, %s", nome);
break;
default:
printf("Opção inválida");
break;
}
return 	0;
}

