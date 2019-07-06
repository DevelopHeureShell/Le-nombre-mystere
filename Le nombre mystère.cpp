#include <iostream>
#include <cstdlib>
#include <time.h>

int main()
{
	int variableAToutFaire = 0;
	int mode = 0;

	std::cout << "Bienvenue dans le nombre mystere, un programme develope par Logivague." << std::endl;
	std::cout << "Voulez-vous jouer a \"1\" ou \"2\" joueurs ?" << std::endl;
	std::cin >> mode;

	if (mode == 1 || 2)
	{
		if (mode == 2)
		{
			int nombreDefini = 0;
			int nombreJoueur = 0;

			std::cout << "Vous avez choisi le mode \"Joueur 2\"" << std::endl;
			std::cout << "Joueur 2, entrez un nombre a faire deviner." << std::endl;
			std::cin >> nombreDefini;

			while (variableAToutFaire != 50)
			{
				std::cout << "Merci de ne pas remonter ces lignes" << std::endl;
				variableAToutFaire++;
			}

			do
			{
				std::cout << "Choisis un nombre, Joueur 1 !" << std::endl;
				std::cin >> nombreJoueur;

				if (nombreDefini < nombreJoueur)
					std::cout << "Trop grand !" << std::endl;

				if (nombreDefini > nombreJoueur)
					std::cout << "Trop petit !" << std::endl;
			} while (nombreDefini != nombreJoueur);
			
			std::cout << "Bravo, Joueur 1, tu as gagne !" << std::endl;
			std::cout << "Le nombre mystere etait :" << nombreDefini << std::endl;
		}

		if (mode == 1)
		{
			int MIN = 1;
			int MAX = 100;
			int nombreDefini = 0;
			int nombreJoueur = 0;

			std::srand(time(NULL));
			nombreDefini = (std::rand() % (MAX - MIN + 1)) + MIN;

			do
			{
				std::cout << "Choisis un nombre entre 1 et 100 !" << std::endl;
				std::cin >> nombreJoueur;

				if (nombreDefini < nombreJoueur)
					std::cout << "Trop grand !" << std::endl;

				if (nombreDefini > nombreJoueur)
					std::cout << "Trop petit !" << std::endl;
			} while (nombreDefini != nombreJoueur);

			std::cout << "Bravo, tu as gagne !" << std::endl;
			std::cout << "Le nombre mystere etait :" << nombreDefini << std::endl;
		}
		
	}
	else
		std::cout << "Saisie incorrecte." << std::endl;

	std::cout << "Entrez n'importe quelle valeur et Entree pour quitter le programme." << std::endl;
	std::cin >> variableAToutFaire;
	return 0;
}