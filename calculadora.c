#include <stdio.h>
#include <stdlib.h>

int main ()

{
    float valor1, valor2, resultado;
    char operador;

    printf("\n\nCalculadora\n\n");

    printf("Digite o primeiro valor:");
    scanf("%f", &valor1);

    printf("Digite o segundo valor:");
    scanf("%f", &valor2);

    printf("Digite a operação desejada:");
    scanf("%s", &operador);

    switch (operador){
        case '+':
            resultado = valor1 + valor2;
            printf("Resultado = %.2f", resultado);
            break;
        case '-':
            resultado = valor1 - valor2;
            printf("Resultado = %.2f", resultado);
            break;
        case '*':
            resultado = valor1 * valor2;
            printf("Resultado = %.2f\n", resultado);
            break;
        case '/':
            resultado = valor1 / valor2;
            printf("Resultado = %.2f\n", resultado);
            break;
        default:
            printf("Operador inválido\n");
    }

    return 0;
}