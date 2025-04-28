#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float a=1.0, b=-4.0, c=-5.07;
    float d, r1, r2;
    d=b*b-4*a*c;
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("\nAs raízes de f são: %.2fe %.2f",r1,r2);
return 0;



}
