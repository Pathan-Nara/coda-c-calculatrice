
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
		scanf(" %c", &symb);
		if(symb != '+' && symb != '-' && symb != '*' && symb != '/' && symb != '%')
		{
			printf("le caractère n'est pas reconnue veuillez réessayer\n");
                        printf("--------------------------------------------\n");
		}
		else
		{
			fin = 1;
		}
	}
	printf("Parfait, maintenant choisissez un nombre : \n");
	printf("nombre numero 1 ? \n");
	scanf("%d", &nb1);
	printf("nombre numero 2 ? \n");
	scanf("%d", &nb2);
	if(symb == '+')
	{
		int res = nb1 + nb2;
		printf("Le resultat de l'opération est... \n");
		printf("%d\n", res);
	}

	else if(symb == '-')
	{
		int res = nb1 - nb2;
                printf("Le resultat de l'opération est... \n");
                printf("%d\n", res);
	}

	else if(symb == '*')
	{
		int res = nb1 * nb2;
                printf("Le resultat de l'opération est... \n");
                printf("%d\n", res);
	}

	else if(symb == '/')
	{

		if(nb1 == 0 || nb2 == 0)
		{
			printf("Erreur, impossible de diviser par 0\n");
			exit(0);
		}

		else
		{
			double nb1f = nb1;
			double nb2f = nb2;
			double res = nb1f/nb2f;
			printf("Le resulat de l'opération est... \n");
			printf("%.5f\n", res);
		}
	}

	else if(symb == '%')
	{

		if(nb1 == 0 || nb2 == 0)
                {
                        printf("Erreur, impossible de diviser par 0\n");
                        exit(0);
                }

                else
                {
                        int res = nb1%nb2;
                        printf("Le resulat de l'opération est... \n");
                        printf("%d\n", res);
                }

	}

	exit(0);
}
