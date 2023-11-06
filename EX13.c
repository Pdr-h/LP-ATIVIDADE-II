#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int n1, n2;
    printf("Digite o primeiro número:\n");
    scanf("%d", &n1);
    printf("Digite o segundo número:\n");
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("%d é maior que %d\n", n1, n2);
    } else {
        printf("%d é maior que %d\n", n2, n1);
    }
    return 0;
}
