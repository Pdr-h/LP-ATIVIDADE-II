#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int conversor = 0, comprimento = 0, tempo = 0, temp = 0;
    float metros2 = 0, temp2 = 0, tempo2 = 0, valor = 0;

    printf("CONVERSOR DE UNIDADES DE BASE BR\n--------------------------------------\n\n");
    printf("[1] - Conversor de Comprimento (M)\n");
    printf("[2] - Conversor de Tempo (S)\n");
    printf("[3] - Conversor de Temperatura (C)\n\n");
    scanf("%d", &conversor);
    system("cls");
    sleep(1);
    switch (conversor)
    {
    case 1:
        SetConsoleTextAttribute(GetStdHandle(STD_INTPUT_HANDLE), 17);
        printf("CONVERSOR DE COMPRIMENTO\n\n");
        printf("[1] - M -> Km\n");
        printf("[2] - M -> Cm\n");
        scanf("%d", &comprimento);
        system("cls");
        sleep(1);
        switch (comprimento)
        {
        case 1:
            printf("Digite o valor em Metros:\n");
            scanf("%f", &metros2);
            sleep(2);
            valor = metros2 / 1000;
            printf("O valor em Km �: %.1fKm\n", valor);
            break;
        case 2:
            printf("Digite o valor em Metros:\n");
            scanf("%f", &metros2);
            sleep(2);
            valor = metros2 * 100;
            printf("O valor em Cm �: %.1fCm\n", valor);
            break;
        default:
            printf("Op��o inv�lida.\n");
            break;
        }
        break;
    case 2:
        printf("CONVERSOR DE TEMPO\n\n");
        printf("[1] - S -> Min\n");
        printf("[2] - Min -> Hr\n");
        scanf("%d", &tempo);
        system("cls");
        sleep(1);
        switch (tempo)
        {
        case 1:
            printf("Digite o valor em Segundos:\n");
            scanf("%f", &tempo2);
            valor = tempo2 / 60;
            printf("O valor em Minutos �: %.1fMin\n", valor);
            break;
        case 2:
            printf("Digite o valor em Minutos:\n");
            scanf("%f", &tempo2);
            valor = tempo2 / 60;
            printf("O valor em Horas �: %.1fHrs\n", valor);
            break;
        default:
            printf("Op��o inv�lida.\n");
            break;
        }
        break;
    case 3:
        printf("CONVERSOR DE TEMPERATURA\n\n");
        printf("[1] - C -> F\n");
        printf("[2] - C -> K\n");
        scanf("%d", &temp);
        system("cls");
        sleep(1);
        switch (temp)
        {
        case 1:
            printf("Digite a temperatura em Celsius:\n");
            scanf("%f", &temp2);
            sleep(2);
            valor = temp2 * 1.8 + 32;
            printf("A temperatura em Fahrenheit �: %.1fF\n", valor);
            break;
        case 2:
            printf("Digite a temperatura em Celsius:\n");
            scanf("%f", &temp2);
            sleep(2);
            valor = temp2 + 273.15;
            printf("A temperatura em Kelvin �: %.1fK\n", valor);
            break;
        default:
            printf("Op��o inv�lida.\n");
            break;
        }
        break;
    default:
        printf("Op��o inv�lida.\n");
        break;
    }
    return 0;
}
