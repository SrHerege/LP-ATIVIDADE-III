#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tamanhoVendas = 100;
    char produtos[tamanhoVendas][50];
    float precos[tamanhoVendas];
    int quantidades[tamanhoVendas];
    int totalVendas = 0;
    float totalGeral;
    int opcao;

    do
    {
        printf("Menu:\n");
        printf("1 -- Adicionar venda\n");
        printf("2 -- Exibir total de vendas e encerrar programa\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        system("cls || clear");

        switch (opcao)
        {
        case 1:
            if (totalVendas < tamanhoVendas)
            {
                printf("Digite o nome do produto: ");
                scanf("%s", produtos[totalVendas]);

                printf("Digite o preço do produto: ");
                scanf("%f", &precos[totalVendas]);

                printf("Digite a quantidade de vendas: ");
                scanf("%d", &quantidades[totalVendas]);

                totalVendas++;
                printf("Venda registrada! \n");
            }
            else
            {
                printf("Você chegou ao limite de vendas permitido.\n");
            }
            break;
        case 2:
            totalGeral = 0.0;
            printf("\nTotal de vendas realizadas:\n");
            for (int i = 0; i < totalVendas; i++)
            {
                printf("Produto: %s - Preço: R$%.2f - Quantidade: %d\n",
                       produtos[i], precos[i], quantidades[i]);
                totalGeral += precos[i] * quantidades[i];
            }
            printf("\nTotal geral de vendas: R$%.2f\n", totalGeral);
            break;
        default:
            printf("Opção inválida. Tente novamente!\n");
        }
    } while (opcao != 2);

    return 0;
}
