#include<stdio.h>
#include<stdlib.h>

int main(){
    float num1, num2, num3, num4;
    float resultado;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero: ");
    scanf("%f", &num2);

    printf("Outro... ");
    scanf("%f", &num3);

    printf("Ultimo... ");
    scanf("%f", &num4);

    resultado = (num1 + num2 + num3 + num4) / 4;

    printf("A media e %.2f", resultado);

    system("pause");
    return 0;
}