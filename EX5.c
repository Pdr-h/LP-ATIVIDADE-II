#include <stdio.h>
#include <stdlib.h>

int main(){

int idioma;
char nome[50];

printf("Digite seu nome:\n");
gets(nome);
printf("Idioma de pref�ncia:\n1 - Ingl�s\n2 - Espanhol\n3 - Franc�s");
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
printf("Op��o inv�lida");
break;
}
return 	0;
}

