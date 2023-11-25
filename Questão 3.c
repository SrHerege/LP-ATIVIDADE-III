#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tamanhoAgenda = 100;
    char nomes[tamanhoAgenda][50];
    char telefones[tamanhoAgenda][15];
    int totalContatos = 0;
    int opcao;

    do
    {
        printf("Selecione uma opção:\n");
        printf("1 -- Adicionar contato\n");
        printf("2 -- Mostrar contatos\n");
        printf("3 -- Encerrar\n");
        printf("Opção: \n");
        scanf("%i", &opcao);
        system("cls || clear");

        switch (opcao)
        {
        case 1:
            if (totalContatos < tamanhoAgenda)
            {
                printf("Digite o nome do contato: \n");
                scanf("%s", nomes[totalContatos]);

                printf("Digite o número de telefone do contato: \n");
                scanf("%s", telefones[totalContatos]);

                totalContatos++;
                printf("Contato adicionado com sucesso!\n");
            }
            else
            {
                printf("A agenda está lotada. Não é possível adicionar mais contatos :(\n");
            }
            break;
        case 2:
            if (totalContatos > 0)
            {
                printf("Contatos cadastrados:\n");
                for (int i = 0; i < totalContatos; i++)
                {
                    printf("%d. Nome: %s - Telefone: %s\n", i + 1, nomes[i], telefones[i]);
                }
            }
            else
            {
                printf("Nenhum contato cadastrado\n");
            }
            break;
        case 3:
            printf("Encerrando o programa\n");
            break;
        default:
            printf("Opção inválida. Tente novamente!\n");
        }
    } while (opcao != 3);

    return 0;
}
