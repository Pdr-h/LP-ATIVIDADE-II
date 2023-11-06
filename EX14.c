#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numeros, par = 0, impar = 0;
    int somapar = 0, somaimpar = 0; 
    float mediapar, mediaimpar;
    do
    {
        printf("Digite um n�mero: \n");
        scanf("%d", &numeros);
        if (numeros % 2 == 0)
        {
            par++;
            somapar += numeros;
        }
        else if (numeros % 2 == 1)
        {
            impar++;
            somaimpar += numeros;
        }
        else if (numeros < 0)
        {
            break;
        }
        system("cls");
        printf("\nQuantidade de pares: %d\n", par);
        printf("Quantidade de �mpares: %d\n", impar);
        
    } while (numeros >= 0);

    mediapar = somapar / par;
    mediaimpar = somaimpar / impar;
    printf("\nTotal de n�meros pares: %d\nSoma dos Pares: %d\n", par, somapar);
    printf("M�dia de pares: %.2f\n\n", mediapar);
    printf("Total de n�meros impares: %d\nSoma dos �mpares: %d\n", impar, somaimpar);
    printf("M�dia de �mpares: %.2f\n", mediaimpar);
    return 0;
}
