#include <stdio.h>
#include<stdlib.h>

int main() {
    int matricula;
    printf("Digite a matricula do funcionario (1 a 30): ");
    scanf(" %d", &matricula);
    if (matricula < 1 || matricula > 30) {
        printf("Matricula invalida! Deve estar entre 1 e 30.\n");
        return 1;
    }
    char *diasSemana[] = {"2a-feira", "3a-feira", "4a-feira", "5a-feira", "6a-feira"};
    int indiceDia = (matricula - 1) / 6;
    int horario = 8 + ((matricula-1) % 6);
    printf("%s as %d:00 horas\n", diasSemana[indiceDia], horario);

    return 0;
}


