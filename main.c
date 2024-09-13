#include <stdio.h>
#define PI 3.14159

float circun(float raio);
float quad(float lado1, float lado2);
float cubo(float lado);
float esfera(float lado);

int main() {
    int opcao = 1;
    float receba, lado1, lado2;
    while (opcao != 0) {
        printf("Escolha: 1-Area Circunferencia 2-Area Retangulo 3-Volume Cubo 4-Volume Esfera 0-Sair\n");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            printf("Insira o raio da circunferencia: ");
            scanf("%f", &receba);
            printf("Area da circunferencia: %.2f\n", circun(receba));
            break;
        case 2:
            printf("Insira os lados do retangulo: ");
            scanf("%f %f", &lado1, &lado2);
            printf("Area do Retangulo: %.2f\n", quad(lado1, lado2));
            break;
        case 3:
            printf("Insira o valor do lado do cubo: ");
            scanf("%f", &receba);
            printf("Volume do cubo: %.2f\n", cubo(receba));
            break;
        case 4:
            printf("Insira o raio da esfera: ");
            scanf("%f", &receba);
            printf("Volume da esfera: %.2f\n", esfera(receba));
            break;
        default:
            if (opcao != 0) {
                printf("Opcao invalida! Tente novamente.\n");
            }
            break;
        }
    }
}

float circun(float raio){
    return PI * (raio*raio);
}

float quad(float lado1, float lado2){
    return lado1 * lado2;
}

float cubo(float lado){
    return lado * lado * lado;
}

float esfera(float raio){
    return (4.0 / 3.0) * PI * (raio * raio * raio);
}