#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

int main() 
{	
	// Declaratio des Variables
	char str[] = "abcdefghijklmnopqrstuvwxyz"; // la chaine de carat�re
	const char ch = 'z'; // Lettres rechercher
	int nbchaine;

	// Calcule de la taille de la chaine a partir du caract�re selectioner
	char* chaine = (strrchr(str, ch)); // C'est barbar mais en gros ca coupe la chaine de caract�re a partir de la lettre rechercher et apr�s je cherche la longeur de cette chaine
	nbchaine = strlen(chaine);

	// Affichage
	printf("Le caractere %c se trouve a la position %d � partir de la droite \n", ch, nbchaine);
}