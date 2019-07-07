#include <iostream>
#include <cstdlib>
#include <time.h>

void joueur1();
void joueurs2();
int nombreAleatoire();

int main()
{
	int mode = 0;

	std::cout << "Bienvenue dans le nombre mystere, un programme develope par Logivague." << std::endl;
	std::cout << "Voulez-vous jouer a \"1\" ou \"2\" joueurs ?" << std::endl;
	std::cin >> mode;

	if (mode == 1 || 2)
	{
		if (mode == 1)
			joueur1();

		if (mode == 2)
			joueurs2();
	}
	else
		std::cout << "Saisie incorrecte." << std::endl;

	system("pause");
	return 0;
}

void joueur1()
{
	int nombreDefini = 0;
	int nombreJoueur = 0;
	int compteurCoups = 0;

	nombreDefini = nombreAleatoire();

	do
	{
		std::cout << "Choisis un nombre entre 1 et 100 !" << std::endl;
		std::cin >> nombreJoueur;

		if (nombreDefini < nombreJoueur)
			std::cout << "Trop grand !" << std::endl;

		if (nombreDefini > nombreJoueur)
			std::cout << "Trop petit !" << std::endl;

		compteurCoups++;

	} while (nombreDefini != nombreJoueur);

	std::cout << "Bravo, tu as gagne !" << std::endl;
	std::cout << "Le nombre mystere etait :" << nombreDefini << std::endl;
	std::cout << "Tu l'as trouvé en :" << compteurCoups << "coups !" << std::endl;
}

void joueurs2()
{
	int nombreDefini = 0;
	int nombreJoueur = 0;
	int compteurCoups = 0;

	std::cout << "Vous avez choisi le mode \"Joueur 2\"" << std::endl;
	std::cout << "Joueur 2, entrez un nombre a faire deviner." << std::endl;
	std::cin >> nombreDefini;

	system("cls");

	do
	{
		std::cout << "Choisis un nombre, Joueur 1 !" << std::endl;
		std::cin >> nombreJoueur;

		if (nombreDefini < nombreJoueur)
			std::cout << "Trop grand !" << std::endl;

		if (nombreDefini > nombreJoueur)
			std::cout << "Trop petit !" << std::endl;

		compteurCoups++;

	} while (nombreDefini != nombreJoueur);

	std::cout << "Bravo, Joueur 1, tu as gagne !" << std::endl;
	std::cout << "Le nombre mystere etait :" << nombreDefini << std::endl;
	std::cout << "Tu l'as trouvé en :" << compteurCoups << "coups !" << std::endl;
}

int nombreAleatoire()
{
	int MIN = 1;
	int MAX = 100;
	int nombreAFaireDeviner = 0;
	std::srand(time(NULL));
	nombreAFaireDeviner = (std::rand() % (MAX - MIN + 1)) + MIN;
	return nombreAFaireDeviner;
}