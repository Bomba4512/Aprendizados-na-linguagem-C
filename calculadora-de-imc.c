#include<stdio.h>
#include<stdlib.h>

int main(){
    float peso;
    float altura;
    float resultado;

    printf("Digite seu pego em KG: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    resultado = peso / (altura * altura);

    printf("O seu IMC e... %.2f", resultado);

    system("pause");
    return 0;
}