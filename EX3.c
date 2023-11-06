#include <stdio.h>
#include <stdlib.h>

int main(){

float nota;

printf("Digite sua nota:\n");
scanf("%f", &nota);

if(nota >= 9 && nota <= 10){
printf("Nota: %.2f ", nota);
printf("\nExcelente");
}
else if(nota >= 7){ 
printf("Nota: %.2f ", nota);
printf("\nBom");
}
else if("nota >= 5"){
printf("Nota: %.2f ", nota);
printf("\nRazoável");	
}
else if("nota < 5"){
printf("Nota: %.2f ", nota);
printf("\nInsuficiente");
}



return 0;
}

