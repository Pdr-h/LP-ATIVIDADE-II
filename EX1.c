#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int temperatura;
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    temperatura = rand() % 41;

    printf("A temperatura de hoje é: %d°C\n", temperatura);
    if (temperatura > 25)
    {
        printf("O clima será: Ensolarado");
    }
    else if (temperatura < 15)
    {
        printf("O clima será: Chuvoso");
    }
    else if (temperatura >= 15 && temperatura <= 25)
    {
        printf("O clima será: Nublado");
    }
    
    return 0;
}