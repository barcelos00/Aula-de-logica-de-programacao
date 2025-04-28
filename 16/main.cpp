#include <iostream>

using namespace std;

int main(){
    int x, y, soma=0, sub=0, mult=0, resto=0;
    float div=0;
    printf ("\nOperações sobre os inteiros");
    printf ("\nDigite o primiero valor: ");
    scanf("%d",&x);
    printf ("\nDigite o segundo valor: ");
    scanf("%d",&y);
    sub=x-y;
    soma=x+y;
    mult=x*y;
    div=x/y;
    resto=x%y;
    printf("\n%d+%d=%d",x,y,soma);
    printf("\n%d-%d=%d",x,y,sub);
    printf("\n%d*%d=%d",x,y,mult);
    printf("\n%+%d=%.2f",x,y,div);
    printf("\n%d%%d=%d",x,y,resto);
return 0;
}
