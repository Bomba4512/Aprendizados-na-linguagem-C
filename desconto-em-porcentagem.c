#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    float preco_prod, porcentagem;
    float desconto, valor_final;

    printf("Digite o preco do produto:\n");
    scanf("%f",&preco_prod);

    printf("Otimo, agora me fale o desconto em porcentagem:\n");
    scanf("%f",&porcentagem);

    desconto = (porcentagem / 100) * preco_prod;
    valor_final = preco_prod - desconto;

    printf("O seu desconto foi de %4.f reais, logo seu produto fica no valor de... %4.f\n", desconto, valor_final);

    system("pause");
    return 0;
}