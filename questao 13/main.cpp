#include <iostream>

using namespace std;

int main()
{
    float hora,minuto, segundos;
    printf ("digite um numero;");
    scanf("%f", & segundos);
    hora=segundos/60/60;
    minuto=segundos/60;
    printf("\nhora %.0f \nminuto %.0f", minuto, hora);
    return 0;
}
