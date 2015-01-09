#include<stdio.h>

int main()
{
	printf("Шрек!\n");
	int valore;
	printf("Inserisci un valore: ");
	scanf("%d", &valore);
	
	if (valore == 5)
	{
	printf("ok\n");
	printf("è il numero giusto\n");
	}

	else
	{
	printf("sbagliato\n");
	}

	return 0;
}

