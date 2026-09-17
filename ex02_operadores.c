#include <stdio.h>

int main()
{

    float a, b, soma, sub, mult, div;

    printf("Digite o primeiro numero:");
    scanf("%f", &a);

    printf("Digite o segundo numero:");
    scanf("%f", &b);

    soma = a + b;
    sub = a - b;
    mult = a * b; // aqui eu errei o operador mas depois corrigi por *
    div = a / b;

    printf("\n---Resultados---\n");
    printf("\na soma dos numeros e:%.2f", soma); //    O "\n" faz a frase ser jogada para linha de abaixo
    printf("\na subtracao dos numeros e:%.2f", sub);
    printf("\na multiplicacao dos numeros e:%.2f", mult);
    printf("\na divisao dos numeros e:%.2f", div);

    return 0; // aqui devo lembrar de finalizar com ponto e virgula
}