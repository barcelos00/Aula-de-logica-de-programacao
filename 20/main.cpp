#include <stdio.h>

int main() {
    int salario1, salario2, total;
    int notas[5] = {100, 50, 20, 10, 5}; // Notas disponíveis (sem R$ 2,00 e moedas)
    int quantidade[5] = {0};

    printf("Digite o valor do primeiro salario: R$ ");
    scanf("%d", &salario1);

    printf("Digite o valor do segundo salario: R$ ");
    scanf("%d", &salario2);

    total = salario1 + salario2;

    printf("\nTotal a ser sacado: R$ %d,00\n", total);

    for (int i = 0; i < 5; i++) {
        quantidade[i] = total / notas[i];
        total %= notas[i];
    }

    printf("Notas necessarias:\n");
    for (int i = 0; i < 5; i++) {
        if (quantidade[i] > 0) {
            printf("%d x R$ %d,00\n", quantidade[i], notas[i]);
        }
    }

    return 0;
}

