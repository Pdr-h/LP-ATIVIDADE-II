#include <stdio.h>
#include <stdlib.h>

int main(){

int codigo;


printf("Digite o c�digo de acesso:\n");
scanf("%d", &codigo);
while(codigo != 101010){
printf("Acesso Negado\nDigite novamente o c�digo\n");
scanf("%d", &codigo);
system("cls");
}
printf("Bem Vindo");


return 	0;
}

