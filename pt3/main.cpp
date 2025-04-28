#include <iostream>

using namespace std;

int main()
{
       float hora,dia,minuto, segundos;
    printf ("digite um numero;");
    scanf("%f", & segundos);
    dia=segundos/60/60/24;
    hora=segundos/60/60;
    minuto=segundos/60;
    printf("\ndia %f \nhora %f \nminuto %f", dia, minuto, hora);
    return 0;

 }
