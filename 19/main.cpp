#include <stdio.h>

int main() {
    float soma, diferenca, x, y;

    // Entrada de dados
    printf("Digite o valor da soma (x + y): ");
    scanf("%f", &soma);
    printf("Digite o valor da diferenca (x - y): ");
    scanf("%f", &diferenca);

    // Cálculo das variáveis
    x = (soma + diferenca) / 2;
    y = (soma - diferenca) / 2;

    // Saída dos resultados
    printf("\nValores encontrados:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);

    return 0;
}
