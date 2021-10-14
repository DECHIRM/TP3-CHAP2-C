#include <iostream>

int main()
{
	// Declaration de ma chaine
	const char *str = "Voici le PrOgRaMe QuI coNverTi les MAJJJ EN MINUSCULE";

	// Affichage de ma chaine
	printf("%s\n", str);

	for (size_t i = 0; i < strlen(str); ++i) 
	{
		// Affichage de ma chaine en minuscule
		printf("%c", tolower((unsigned char)str[i]));
	}
	printf("\n"); // aller a la ligne
}