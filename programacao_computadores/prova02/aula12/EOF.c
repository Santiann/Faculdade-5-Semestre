#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
int main(){
	FILE *arq;
	char c;
	arq = fopen("Poesia.txt","r");
	if(arq == NULL){
		printf("Erro na abertura do arquivo");
		system("pause");
		exit(1);
}
while((c = fgetc(arq)) != EOF)
{
	printf("%c",c);
}

fclose(arq);
system("pause");
return 0;
=======
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
	while ((c = fgetc(arq)) != EOF)
	{
		printf("%c", c);
	}

	fclose(arq);
	system("pause");
	return 0;
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b
}
