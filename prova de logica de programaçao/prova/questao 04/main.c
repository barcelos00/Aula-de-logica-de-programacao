#include <stdio.h>

int main() {
    float ajuda;
    int vitorias;
    float porcentagem_premio;
    float valor_premio;
    float valor_total;

    printf("Digitee o valor da ajuda de custo: R$ ");
    scanf("%f", &ajuda);

    printf("Digite o numero de vitorias do participante: ");
    scanf("%d", &vitorias);

    if (vitorias == 0) {
        porcentagem_premio = 0.0;
    } else if (vitorias >= 1 && vitorias <= 3) {
        porcentagem_premio = 0.10; // 10%
    } else if (vitorias >= 4 && vitorias <= 6) {
        porcentagem_premio = 0.15; // 15%
    } else { // Superior a 6 vitórias
        porcentagem_premio = 0.20; // 20%
    }

    valor_premio = ajuda * porcentagem_premio;
    valor_total = ajuda + valor_premio;

    printf("Porcentagem do premio: %.0f%%\n", porcentagem_premio * 100);
    printf("Valor total a receber: R$ %.2f\n", valor_total);

    return 0;
}
