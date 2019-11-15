/****
	* Titre : Hotel.cpp
	* Auteur : Franck GUILLERME
	* Date : 15/11/19
	* Objectif : définir la classe Hotel
	****/



#include "Hotel.h"

Hotel::Hotel(int id, int nom, int ville,int nbchambre)
{
	this->id = id;
	this->nom = nom;
	this->ville = ville;
}
int Hotel::getId() const 
{
	return this->id;
}
void Hotel::setId(int id)
{
	this->id = id;
}
String Hotel::getNom() const
{
	return this-> nom;
}
void Hotel::setNom(string Nom)
{
	this->nom =nom;
}
string Hotel::getVille() const
{
	return this->ville
}
void Hotel::setVille(string ville)
{
	this->ville = ville;
}
int Hotel::getChambre() const
{
	return this->listChambre;
}
void Hotel::setchambre(int nbchambre)
{
	this->listChambre;
}