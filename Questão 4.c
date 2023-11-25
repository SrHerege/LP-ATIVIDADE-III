#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numeros[5];
    int somaPares = 0, qtdPares = 0;
    int qtdImpares = 0, qtdNegativos = 0;
    int maior, menor;
    float mediaInseridos, mediaPares;

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%i", &numeros[i]);

        if (numeros[i] % 2 == 0)
        {
            somaPares += numeros[i];
            qtdPares++;
        }

        if (numeros[i] % 2 != 0)
        {
            qtdImpares++;
        }

        if (numeros[i] < 0)
        {
            qtdNegativos++;
        }

        if (i == 0 || numeros[i] > maior)
        {
            maior = numeros[i];
        }
        if (i == 0 || numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    if (qtdPares > 0)
    {
        mediaPares = (float)somaPares / qtdPares;
    }
    else
    {
        mediaPares = 0.0;
    }

    mediaInseridos = (float)(numeros[0] + numeros[1] + numeros[2] + numeros[3] + numeros[4]) / 5;

    printf("Resultados das informações inseridas: \n");
    printf("Quantidade de números ímpares: %d\n", qtdImpares);
    printf("Quantidade de números negativos: %d\n", qtdNegativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média de números pares: %.2f\n", mediaPares);
    printf("Média de números inseridos: %.2f\n", mediaInseridos);

    return 0;
}
