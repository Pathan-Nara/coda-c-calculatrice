#include <stdlib.h>
#include <stdio.h>

int main()

{
	int nb1;
	int nb2;
	char symb;
	int fin = 0;

	printf("Bonjour et bienvenu dans mon incroyable calculatrice \n");
	while(fin == 0)
	{
		printf("Choisissez l'opération que vous souhaitez effectuer \n");
		printf("(vous avez le choix entre '+', '-', '*', '/', '%%') \n");
		scanf("%c", &symb);
		printf("Parfait, maintenant choisissez un nombre : \n");
		printf("nombre numero 1 ? \n");
		scanf("%d", &nb1);
		printf("nombre numero 2 ? \n");
		scanf("%d", &nb2);
		if(symb == '+')
		{
			printf("addition \n");
			fin = 1;
		}

		else if(symb == '-')
		{
			printf("soustraction \n");
			fin = 1;
		}

		else if(symb == '*')
		{
			printf("multiplication \n");
			fin = 1;
		}

		else if(symb == '/')
		{
			printf("division \n");
			fin = 1;
		}

		else if(symb == '%')
		{
			printf("modulo \n");
			fin = 1;
		}

		else
		{
			printf("le caractère n'est pas reconnue veuillez réessayer. \n");
			printf(" -------------------------------------------- \n");

		}
	}
	exit(0);
}
