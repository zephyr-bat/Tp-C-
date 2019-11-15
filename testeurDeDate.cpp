#include <iostream>
#include "date.h"


int jour, mois, annee=0;

int main()
{
	std::cout << "entrer le jour, le mois, puis l'année" << std::endl;

	std::cout << "mois :";
	std::cin >> mois;


	//on verifie si le numéro du mois est conforme
	while (mois > 12){
		std::cout << "entrer le bon mois :";
		std::cin >> mois;
	}



	std::cout << "jour :";
	std::cin >> jour;

	//on définit le nombre de jour en fonction du mois
	if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12){
		while (jour > 31){
			std::cout << "entrer le bon jour :";
			std::cin >> jour;
		}
	}

	if (mois == 4 || mois == 6 || mois == 9 || mois == 11){
		while (jour > 30){
			std::cout << "entrer le bon jour :";
			std::cin >> jour;
		}
	}


	if (mois == 2){
		while (jour > 28){
			std::cout << "entrer le bon jour :";
			std::cin >> jour;
		}
	}






	std::cout << "annee :";
	std::cin >> annee;

	Date maDate(jour, mois, annee);
	jour = maDate.getJour();
	mois = maDate.getMois();
	annee = maDate.getAnnee();

	std::cout << jour << "/" << mois << "/" << annee << std::endl;

	return 0;
}