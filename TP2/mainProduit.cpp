/****
	* Titre : mainProduit.cpp
	* Auteur : Armand Audeoud
	* Date : 06/12/19
	* Objectif : tester la classe Produit
	****/

#include "Produit.h"
#include <iostream>
#include <string>


int main()
{
	Produit monProduit("cure-dent", 0.02, 8052, "Pas de description disponible", 1);
	Produit monProduit2("dentifrice", 4.55, 74, "pour laver la porcelaine", 2);

	std::cout << "Produit : " << monProduit.getTitre() << " Prix : " << monProduit.getPrix()<< " Quantité disponible : " << monProduit.getQte() << std::endl;
	std::cout << "Description : " << monProduit.getDescr() << " Id" << monProduit.getId() << std::endl;

	std::cout << "Produit : " << monProduit2.getTitre() << " Prix : " << monProduit2.getPrix()<< " Quantité disponible : " << monProduit2.getQte() << std::endl;
	std::cout << "Description : " << monProduit2.getDescr() << " Id" << monProduit2.getId() << std::endl;
	return 0;
}