#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
int main(){
	FILE *arq;
	char c;
	arq = fopen("Poesia.txt","r");
	if(arq == NULL){
=======
int main()
{
	FILE *arq;
	char c;
	arq = fopen("Poesia.txt", "r");
	if (arq == NULL)
	{
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b
		printf("Erro na abertura do arquivo");
		system("pause");
		exit(1);
	}
<<<<<<< HEAD
int i;
for(i = 0; i < 1000; i++)
{
	c = fgetc(arq);
	printf("%c",c);
}
printf("\n_________________________________________\n");
fclose(arq);
system("pause");
return 0;
}

=======
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
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b
