/****
	* Titre : Hotel.cpp
	* Auteur : Franck GUILLERME
	* Date : 15/11/19
	* Objectif : définir la classe Hotel
	****/


#include <iostream>
#include <string>
#include <vector> 
#include "Hotel.h"
using namespace std;

Hotel::Hotel(int id,string nom,string ville,vector<int> chambres)
{
	this->id = id;
	this->nom = nom;
	this->ville = ville;
	this->listChambre = chambres;

}
int Hotel::getId() const 
{
	return this->id;
}
void Hotel::setId(int id)
{
	this->id = id;
}
string Hotel::getNom() const
{
	return this-> nom;
}
void Hotel::setNom(string Nom)
{
	this->nom =Nom;
}
string Hotel::getVille() const
{
	return this->ville;
}
void Hotel::setVille(string ville)
{
	this->ville = ville;
}
int Hotel::getChambre(int x) const
{
	std::vector<int>::iterator it; 
	it = find (listChambre.begin(), listChambre.end(), x);
	if (it != listChambre.end()) 
    {     
        std:: cout << it - vec.begin() + 1 << "\n" ; 
    } 
    return 1;
	
}
void Hotel::setchambre()
{
	//this->listChambre = nbchambre;
}
void Hotel::ChangeHotel(int id,string nom,string ville)
{
	setId(id);
	setNom(nom);
	setVille(ville);
	//setchambre(nbchambre);
}
