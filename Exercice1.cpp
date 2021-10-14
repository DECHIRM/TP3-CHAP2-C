#include <iostream>
#include <string>

int main() {
	//Déclaration de la chaine 
	char chaine[100];
	std::cout << "Inserer le texte a inverser : ";
	std::cin >> chaine;

	//Inverse
	std::string tmp_s = chaine;
	std::string tmp_s_reversed(tmp_s.rbegin(), tmp_s.rend());

	//Affichage
	std::cout << "Le texte inverser : ";
	std::cout << tmp_s_reversed << std::endl;
}