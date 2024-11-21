#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *arq;
	char c;
	arq = fopen("Poesia.txt", "r");
	if (arq == NULL)
	{
		printf("Erro na abertura do arquivo");
		system("pause");
		exit(1);
	}
	int i;
	for (i = 0; i < 1000; i++)
	{
		c = fgetc(arq);
		printf("%c", c);
	}
	printf("\n_________________________________________\n");
	fclose(arq);
	system("pause");
	return 0;
}
