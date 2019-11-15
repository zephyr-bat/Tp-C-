/****
	* Titre : Hotel.h
	* Auteur : Franck Guillerme
	* Date : 15/11/19
	* Objectif : déclarer la classe Hotel
	****/


#include <string>
#include <iostream>
#include <vector> 
using namespace std;

#ifndef Hotel_H
#define Hotel_H

class Hotel{
	private :
		int id;
		string nom;
		string ville;
		vector<int> listChambre;

	public :
		Hotel(int id,string nom,string ville,vector<int> chambres);
		int getId() const;
		void setId(int id);
		string getNom() const;
		void setNom(string Nom);
		string getVille() const;
		void setVille(string ville);
		int getChambre(int x) const;
		void setchambre();
		void ChangeHotel(int id,string nom,string ville);
};

#endif
