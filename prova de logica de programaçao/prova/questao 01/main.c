#include <stdio.h>
#include <stdlib.h>

int fMisterio(int a, int c) {
    int t = a;
    printf("%d \n",t + c);
        if (t % 5 == 0) {
            return t + c;
        } else {
            t = t + 1;
        }
        printf("T=%d\n", t);
        return 0;
    }

int main() {
    int i, j;
        j = 15;
        i = 3;
    printf("%d \n", fMisterio(i, j));
    printf("\n%d ", fMisterio(j, i));
    j = 1;
    fMisterio(i, j);
    printf("%d \n", fMisterio(j, i));
    printf("\n%d ", fMisterio(j, i));
    return 0;
}
