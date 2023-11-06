#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int numero, i;

printf("Digite um número para contagem regressiva\n");
scanf("%d", &numero);
system("cls");
sleep(1);
printf("CONTAGEM REGRESSIVA..\n\n");
for(i = numero; numero >= 0; numero--){
printf("%d\n", numero);
sleep(1);
}
return 	0;
}

