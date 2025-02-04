#include<stdio.h>
#include<stdlib.h>

int main(){
    char animal[30]; //Girafa
    int qtd_animal; //2
    float preco_comida, comida_kg; //10 //34
    
    printf("Nome do animal:\n");
    gets(animal);
    
    printf("Quantidade de animais no zoologico:\n");
    scanf("%d",&qtd_animal);

    printf("Quanto custa cada kilo de comida:\n");
    scanf("%f",&preco_comida);
    
    printf("Quantos kilos cada animal come por dia:\n");
    scanf("%f",&comida_kg);
    
    float custo_dia = (comida_kg * preco_comida) * qtd_animal;
    float qtd_comida_mes = (qtd_animal * comida_kg) * 30;
    float custo_mes = qtd_comida_mes * preco_comida;

    printf("Nome do animal: %s\n",animal);
    printf("Custo estimado por dia: %2.f\n",custo_dia);
    printf("Quantidade de comida consumida por mes: %2.f\n",qtd_comida_mes);
    printf("Custo estimado por mes: %2.f\n", custo_mes);

    system("pause");
    return 0;
    }