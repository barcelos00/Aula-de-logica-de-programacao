#include <iostream>

using namespace std;

int main()
{   int valor1, valor2;
    printf("Digite 2 valores inteiros:\n");
    scanf("%d %d", &valor1, &valor2);
    valor1 = valor1 + valor2;
    valor2 = valor1 - valor2;
    valor1 = valor1 - valor2;
    printf("\nValores invertidos:\n");
    printf("Valor 1: %d\n", valor1);
    printf("Valor 2: %d\n", valor2);

    return 0;
}


