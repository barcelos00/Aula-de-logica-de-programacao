#include <stdio.h>
#include <math.h>

int eh_primo_recursivo(int numero, int divisor) {
    if (divisor * divisor > numero) {
        return 1;
    }
    if (numero % divisor == 0) {
        return 0;
    }
    return eh_primo_recursivo(numero, divisor + 1);
}
int eh_primo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    return eh_primo_recursivo(numero, 2);
}
int encontrar_menor_divisor_recursivo(int numero, int divisor) {
    if (divisor >= numero) {
        return numero;
    }
    if (numero % divisor == 0) {
        return divisor;
    }
    return encontrar_menor_divisor_recursivo(numero, divisor + 1);
int encontrar_menor_divisor(int numero) {
    if (eh_primo(numero)) {
        return 0;
    }
    return encontrar_menor_divisor_recursivo(numero, 2);
}
int main() {
    // Parte a)
    int valor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    if (eh_primo(valor)) {
        printf("O numero %d e primo.\n", valor);
    } else {
        printf("O numero %d nao e primo.\n", valor);
    }

    printf("\n");
    // Parte b)
    int outro_valor;
    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &outro_valor);

    int resultado = encontrar_menor_divisor(outro_valor);

    if (resultado == 0) {
        printf("Numero primo\n");
    } else {
        printf("Menor divisor do numero %d e: %d\n", outro_valor, resultado);
    }

    return 0;
}
