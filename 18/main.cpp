#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    float saldo_inicial, salario, retirada, saldo_parcial=0;
    printf("   EXTRATO BANCARIO\N");
    printf("\nSaldo inicial: R$");
    scanf ("%f",&saldo_inicial);
    printf("\nSalario: R$");
    scanf("%f",&salario);
    saldo_parcial=saldo_inicial+salario;
    printf("\nSaldo parcial: R$ %.2f", saldo_parcial);
    printf("\nPrimeira retirada: R$");
    scanf("%f", &retirada);
    saldo_parcial=saldo_parcial-retirada;
    printf("\nSaldo parcial: %.2f", saldo_parcial);
    printf("\nSegunda retirada: R$");
    scanf("%f", &retirada);
    saldo_parcial=saldo_parcial-retirada;
    printf("\nSaldo parcial: %.2f", saldo_parcial);
    printf("\nTerceira retirada: R$");
    scanf("%f", &retirada);
    saldo_parcial=saldo_parcial-retirada;
    printf("\nSaldo parcial: %.2f", saldo_parcial);
    return 0;

}
