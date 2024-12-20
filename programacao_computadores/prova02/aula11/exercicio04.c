/**
 * Escreva um programa que crie um arquivo chamado "registro.txt" para armazenar informa��es de
 * alunos. O programa deve permitir ao usu�rio inserir os dados de v�rios alunos, como nome,
 * matr��cula e idade. Os dados de cada aluno devem ser escritos no arquivo em um formato espec�fico.
 * Depois que o usu�rio inserir os dados, o programa deve listar os alunos do arquivo no console.
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[100];
    int matricula;
    int idade;
} Aluno;

void armazenaAlunos(FILE *arquivo, int numAlunos)
{
    for (int i = 0; i < numAlunos; i++)
    {
        Aluno aluno;

        printf("Digite o nome do aluno %d: ", i);
        scanf(" %[^\n]", aluno.nome);

        printf("Digite a matr�cula do aluno %d: ", i);
        scanf("%d", &aluno.matricula);

        printf("Digite a idade do aluno %d: ", i);
        scanf("%d", &aluno.idade);

        fprintf(arquivo, "Nome: %s\nMatr�cula: %d\nIdade: %d\n\n", aluno.nome, aluno.matricula, aluno.idade);
    }
}

void listarAlunos(FILE *arquivo)
{
    printf("\n--- Lista de Alunos ---\n");
    char linha[256];
    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        printf("%s", linha);
    }
}

int main()
{
    int numAlunos;

    FILE *arquivo = fopen("alunos.txt", "a+");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    printf("Favor me informe a quantidade de alunos que deseja adicionar: ");
    scanf("%d", &numAlunos);

    armazenaAlunos(arquivo, numAlunos);

    rewind(arquivo);

    listarAlunos(arquivo);

    fclose(arquivo);
    return 0;
}
