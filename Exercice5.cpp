#include <iostream>

int main()
{
	// Declaration de mes variables
	char chaine[100] = "le lan   ga  ge C est un lang   age ex   trao    rdin   aire";
	int i;
	int j = -1;

	// Affichage de ma chaine 
	printf("%s$\n", chaine);

	// Boucle sur la chaine 
	for (i = 0; chaine[i]; i++)
	{
		if (chaine[i] != ' ')
		{
			chaine[++j] = chaine[i];  // Supressino des espaces
		}
	}
	chaine[++j] = '\0';

	//Affichage de la chaine sans espaces
	printf("%s \n", chaine);
}