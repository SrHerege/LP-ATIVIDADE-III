#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nomes[5][50];
    int idades[5];
    float pesos[5];
    float alturas[5];

    char maisAlta[50], maisBaixa[50];
    float alturaMaisAlta = 0, alturaMaisBaixa = 1000;
    char maisPesada[50], maisLeve[50];
    float pesoMaisPesado = 0, pesoMaisLeve = 1000;
    char maisVelha[50], maisNova[50];
    int idadeMaisVelha = 0, idadeMaisNova = 150;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        printf("Digite o peso da pessoa %d: ", i + 1);
        scanf("%f", &pesos[i]);
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &alturas[i]);
         system("cls || clear");

        while (getchar() != '\n'); // prof eu não conhecia essa função, encontrei ela porque as linhas de printf tavam sobrepondo uma as outras

        if (alturas[i] > alturaMaisAlta)
        {
            strcpy(maisAlta, nomes[i]);
            alturaMaisAlta = alturas[i];
        }
        if (alturas[i] < alturaMaisBaixa)
        {
            strcpy(maisBaixa, nomes[i]);
            alturaMaisBaixa = alturas[i];
        }
        if (pesos[i] > pesoMaisPesado)
        {
            strcpy(maisPesada, nomes[i]);
            pesoMaisPesado = pesos[i];
        }
        if (pesos[i] < pesoMaisLeve)
        {
            strcpy(maisLeve, nomes[i]);
            pesoMaisLeve = pesos[i];
        }
        if (idades[i] > idadeMaisVelha)
        {
            strcpy(maisVelha, nomes[i]);
            idadeMaisVelha = idades[i];
        }
        if (idades[i] < idadeMaisNova)
        {
            strcpy(maisNova, nomes[i]);
            idadeMaisNova = idades[i];
        }
    }

    printf("\nInformacoes sobre a pessoa mais alta:\n");
    printf("Nome: %s\n", maisAlta);
    printf("Altura: %.2f\n", alturaMaisAlta);

    printf("\nInformacoes sobre a pessoa mais baixa:\n");
    printf("Nome: %s\n", maisBaixa);
    printf("Altura: %.2f\n", alturaMaisBaixa);

    printf("\nInformacoes sobre a pessoa mais pesada:\n");
    printf("Nome: %s\n", maisPesada);
    printf("Peso: %.2f\n", pesoMaisPesado);

    printf("\nInformacoes sobre a pessoa mais leve:\n");
    printf("Nome: %s\n", maisLeve);
    printf("Peso: %.2f\n", pesoMaisLeve);

    printf("\nInformacoes sobre a pessoa mais velha:\n");
    printf("Nome: %s\n", maisVelha);
    printf("Idade: %d\n", idadeMaisVelha);

    printf("\nInformacoes sobre a pessoa mais nova:\n");
    printf("Nome: %s\n", maisNova);
    printf("Idade: %d\n", idadeMaisNova);

    return 0;
}
