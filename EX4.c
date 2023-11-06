#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Acesso permitido\n");
    } else {
        printf("Acesso negado\n");
    }
    return 0;
}
