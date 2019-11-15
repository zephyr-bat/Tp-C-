/****
	* Titre : Hotel.h
	* Auteur : Franck Guillerme
	* Date : 15/11/19
	* Objectif : déclarer la classe Hotel
	****/


#ifndef Hotel_H
#define Hotel_H
#include <string>
#include <iostream>

class Hotel{
	private :
		int id;
		string nom;
		string ville;
		int listChambre;

	public :
		Hotel(int id,int nom,int ville,int nbchambre);
		int getId() const;
		void setId(int id);
		string getNom() const;
		void setNom(string Nom);
		string getVille() const;
		void setVille(string ville);
		int getChambre() const;
		void set chambre(int nbchambre);
};

#endif