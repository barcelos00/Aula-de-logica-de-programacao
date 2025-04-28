#include <iostream>

using namespace std;

int main(){
    float peso, h, imc=0;
    printf("\nIndicie de massa corporal");
    printf("\nDigite o peso em kg: ");
    scanf ("%f",&peso);
    printf("\nDigite a altura em metros: ");
    scanf("%f",&h);
    imc=peso/(h*h);
    printf ("\nValor do IMC: %f", imc);
    return 0;

}
