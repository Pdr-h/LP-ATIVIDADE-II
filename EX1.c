#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int temperatura;
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    temperatura = rand() % 41;

    printf("A temperatura de hoje �: %d�C\n", temperatura);
    if (temperatura > 25)
    {
        printf("O clima ser�: Ensolarado");
    }
    else if (temperatura < 15)
    {
        printf("O clima ser�: Chuvoso");
    }
    else if (temperatura >= 15 && temperatura <= 25)
    {
        printf("O clima ser�: Nublado");
    }
    
    return 0;
}