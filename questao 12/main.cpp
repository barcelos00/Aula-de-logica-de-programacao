    #include <iostream>

    using namespace std;

    int main(){
        float preco, desconto, preco_com_desconto;
        printf ("Digite pre�o do produto:");
        scanf("%f", &preco);
        desconto= preco*0.25;
        preco_com_desconto= preco-desconto;
        printf("preco original: %.2f\n", preco);
        printf("desconto aplicado: %.2f\n",desconto);
        printf("preco com desconto: %.2f\n", preco_com_desconto);
        return 0;


    }

