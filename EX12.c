#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int quantidade, i;
    float nota, soma = 0, media;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / quantidade;
    printf("A media das %d notas é: %.2f\n", quantidade, media);

    return 0;
}
