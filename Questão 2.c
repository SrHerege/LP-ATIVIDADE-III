#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numAlunos = 5;
    int numNotas = 3;
    int num_Alunos = 5;
    int num_Notas = 3;

    char nomes[numAlunos][50];
    int idades[numAlunos];
    float notas[numAlunos][numNotas];
    float medias[numAlunos];

    for (int i = 0; i < num_Alunos; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &idades[i]);

        printf("Digite as 3 notas do aluno %d:\n", i + 1);
        for (int j = 0; j < num_Notas; j++)
        {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }

        medias[i] = 0;
        for (int j = 0; j < num_Notas; j++)
        {
            medias[i] += notas[i][j];
        }
        medias[i] /= num_Notas;

        printf("\n");
    }

    for (int i = 0; i < num_Alunos; i++)
    {
        printf("Dados do aluno %d:\n", i + 1);
        printf("Nome: %s\n", nomes[i]);
        printf("Idade: %d\n", idades[i]);
        printf("Notas: %.2f, %.2f, %.2f\n", notas[i][0], notas[i][1], notas[i][2]);
        printf("Média: %.2f\n", medias[i]);

        if (medias[i] >= 7.0)
        {
            printf("Situação: Aprovado\n");
        }
        else if (medias[i] >= 5.0)
        {
            printf("Situação: Em recuperação\n");
        }
        else
        {
            printf("Situação: Reprovado\n");
        }

        printf("\n");
    }

    return 0;
}
