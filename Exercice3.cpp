#include <iostream>


int nb_occ(char* chaine, char car)
{
	int c, nbocc = 0,
		size = strlen(chaine);  // taille de la chaine

	for (c = 0; c < size; c++)
	{
		if (chaine[c] == car)  // si le caractère n° c est bien le caractère
			nbocc++;           // incrementation du compteur
	}

	return nbocc;              // on retourne le compteur
}

int main()
{
	// Ma chaine de caracteres
	char maChaine[] = "A la recherche des caracteres";

	// nb_occ la fonction qui permet de compter le nombre de caracteres
	int nbA = nb_occ(maChaine, 'a'); 
	int nbB = nb_occ(maChaine, 'b');
	int nbC = nb_occ(maChaine, 'c');
	int nbD = nb_occ(maChaine, 'd');
	int nbE = nb_occ(maChaine, 'e');
	int nbF = nb_occ(maChaine, 'f');
	int nbG = nb_occ(maChaine, 'g');
	int nbH = nb_occ(maChaine, 'h');
	int nbI = nb_occ(maChaine, 'i');
	int nbJ = nb_occ(maChaine, 'j');
	int nbK = nb_occ(maChaine, 'k');
	int nbL = nb_occ(maChaine, 'l');
	int nbM = nb_occ(maChaine, 'm');
	int nbN = nb_occ(maChaine, 'n');
	int nbO = nb_occ(maChaine, 'o');
	int nbP = nb_occ(maChaine, 'p');
	int nbQ = nb_occ(maChaine, 'q');
	int nbR = nb_occ(maChaine, 'r');
	int nbS = nb_occ(maChaine, 's');
	int nbT = nb_occ(maChaine, 't');
	int nbU = nb_occ(maChaine, 'u');
	int nbV = nb_occ(maChaine, 'v');
	int nbW = nb_occ(maChaine, 'w');
	int nbX = nb_occ(maChaine, 'x');
	int nbY = nb_occ(maChaine, 'y');
	int nbZ = nb_occ(maChaine, 'z');
	int nbESPACE = nb_occ(maChaine, ' ');

	// Affichage de la chaine
	printf("La chaine : '%s' \n", maChaine);

	// Affichage du nombre de caractère lettres par lettres
	printf("contient %d fois le caractere 'A'.\n", nbA);
	printf("contient %d fois le caractere 'B'.\n",  nbB);
	printf("contient %d fois le caractere 'C'.\n", nbC);
	printf("contient %d fois le caractere 'D'.\n", nbD);
	printf("contient %d fois le caractere 'E'.\n", nbE);
	printf("contient %d fois le caractere 'F'.\n", nbF);
	printf("contient %d fois le caractere 'G'.\n", nbG);
	printf("contient %d fois le caractere 'H'.\n", nbH);
	printf("contient %d fois le caractere 'I'.\n", nbI);
	printf("contient %d fois le caractere 'J'.\n", nbJ);
	printf("contient %d fois le caractere 'K'.\n", nbK);
	printf("contient %d fois le caractere 'L'.\n", nbL);
	printf("contient %d fois le caractere 'M'.\n", nbM);
	printf("contient %d fois le caractere 'N'.\n", nbN);
	printf("contient %d fois le caractere 'O'.\n", nbO);
	printf("contient %d fois le caractere 'P'.\n", nbP);
	printf("contient %d fois le caractere 'Q'.\n", nbQ);
	printf("contient %d fois le caractere 'R'.\n", nbR);
	printf("contient %d fois le caractere 'S'.\n", nbS);
	printf("contient %d fois le caractere 'T'.\n", nbT);
	printf("contient %d fois le caractere 'U'.\n", nbU);
	printf("contient %d fois le caractere 'V'.\n", nbV);
	printf("contient %d fois le caractere 'W'.\n", nbW);
	printf("contient %d fois le caractere 'X'.\n", nbX);
	printf("contient %d fois le caractere 'Y'.\n", nbY);
	printf("contient %d fois le caractere 'Z'.\n", nbZ);
	printf("contient %d fois le caractere 'ESPACE'.\n", nbESPACE);
}