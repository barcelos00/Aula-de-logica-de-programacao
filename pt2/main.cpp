#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int d=0, h=0, m=0, s=200000, r=0;
    d=s/86400;
    r=s-(d*86400);
    h=r/3600;
    r=r-(h*3600);
    m=r/60;
    r=r-(m*60);
        printf("\nDia: %d \nHora: %d \nMin %d \nSeg %d", d,h,m,r);

    return 0;
}
