#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Crie um programa em C para gerenciar um cat�logo de produtos. Cada produto deve ter um nome (string),
 * um c�digo (inteiro), uma descri��o (string) e um pre�o (float). O programa deve permitir ao usu�rio
 * adicionar produtos ao cat�logo e exibir todos os produtos cadastrados. Utilize aloca��o din�mica para
 * armazenar os produtos e permita que o usu�rio insira a quantidade desejada de produtos.
 * Ao final, o programa deve liberar a mem�ria alocada.
 *
 */
struct produto
{
    char nome[50];
    int codigo;
    char descricao[100];
    float preco;
};

void mostraProdutos(int quantidade, struct produto *catalago)
{
    for (int j = 0; j < quantidade; j++)
    {
        printf("\n Nome do produto: %s \n", catalago[j].nome);
        printf("C�digo do produto: %d \n", catalago[j].codigo);
        printf("Descri��o do produto: %s \n", catalago[j].descricao);
        printf("Pre�o do produto: %f \n", catalago[j].preco);
    }
}

void insereProdutos(int quantidade, struct produto *catalogo)
{
    for (int i = 0; i < quantidade; i++)
    {
        printf("\n Produto %d \n", i + 1);
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]s", catalogo[i].nome);

        printf("Digite o c�digo do produto: ");
        scanf("%d", &catalogo[i].codigo);

        printf("Digite uma descri��o para o produto: ");
        scanf(" %[^\n]s", catalogo[i].descricao);

        printf("Digite o valor do produto: ");
        scanf("%f", &catalogo[i].preco);
    }
}

int main()
{
    int menuSelecionado;
    int quantidade;
    struct produto *catalago;

    do
    {
        printf("\n Selecione um item do menu: \n");
        printf("1. Listar produtos: \n");
        printf("2. Inserir produtos: \n");
        printf("3. Sair: \n");
        printf("Op��o: ");
        scanf("%d", &menuSelecionado);

        switch (menuSelecionado)
        {
        case 1:
            mostraProdutos(quantidade, catalago);
            break;
        case 2:
            printf("Insira a quantidade de produtos que deseja: ");
            scanf("%d", &quantidade);

            catalago = (struct produto *)malloc(quantidade * sizeof(struct produto));

            insereProdutos(quantidade, catalago);
            break;
        case 3:
            printf("Saindo....");
            break;
        default:
            break;
        }

    } while (menuSelecionado != 3);
    {
        free(catalago);
    }

    return 0;
}