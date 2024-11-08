#include <stdlib.h>
#include <stdio.h>

struct ContaBancaria
{
    int numConta;
    char nome[50];
    float saldo;
};

void insereContas(int quantContas, struct ContaBancaria *contas)
{
    for (int i = 0; i < quantContas; i++)
    {
        printf("\n Conta bancária %d", i + 1);

        printf("\n Digite o número da conta: ");
        scanf("%d", &contas[i].numConta);

        printf("\n Informe o nome da conta: ");
        scanf(" %[^\n]s", contas[i].nome);

        printf("\n Informe o saldo: ");
        scanf("%f", &contas[i].saldo);
    }
}

void listaContas(int quantContas, struct ContaBancaria *contas)
{
    printf("\n ___Listando___ \n");
    for (int i = 0; i < quantContas; i++)
    {
        printf("\n Conta bancária: %d \n", i + 1);
        printf("\n Número da conta: %d \n", contas[i].numConta);
        printf("\n Nome da conta: %s \n", contas[i].nome);
        printf("\n Saldo na conta: %f \n", contas[i].saldo);
    }
}

int main()
{
    int quantContas;

    printf("\n Favor, informe a quantidade de contas bancárias que deseja: ");
    scanf("%d", &quantContas);

    struct ContaBancaria *contas = malloc(quantContas * sizeof(struct ContaBancaria));
    insereContas(quantContas, contas);
    listaContas(quantContas, contas);

    free(contas);
    return 0;
}