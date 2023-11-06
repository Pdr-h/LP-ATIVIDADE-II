#include <stdio.h>
#include <stdlib.h>

int main(){

int dia;
float valor, desconto = 0;
float valorTotal;

printf("Digite o valor da compra:\nR$");
scanf("%f", &valor);

printf("Escolha a opção referente ao dia de hoje: \n\n");
printf("1 - Domingo\n2 - Segunda\n3 - Terça\n4 - Quarta\n");
printf("5 - Quinta\n6 - Sexta\n7 - Sábado\n");
scanf("%d", &dia);

printf("\nValor da compra R$%.2f\n\n", valor);

switch(dia){
case 2: 
case 3:
case 4: 
case 5: 
case 6:
if(valor > 100){
printf("Desconto adquirido de 10%\n");
desconto = valor * 0.1;
valorTotal = valor - desconto;
printf("Valor total da compra:\nR$%.2f", valorTotal);
}
break;
case 1:
case 7:
if(valor > 100){
printf("Desconto adquirido de 15%\n");
desconto = valor * 0.15;
valorTotal = valor - desconto;
printf("Valor total da compra:\nR$%.2f", valorTotal);
}
break;
default: 
printf("Dia Inválido");
break;
}

return 0;
}
