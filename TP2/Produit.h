/****
	* Titre : Produit.h
	* Auteur : Armand Audeoud
	* Date : 06/12/19
	* Objectif : déclarer la classe Produit
	****/

#ifndef PRODUIT_H
#define PRODUIT_H
#include <iostream>
#include <string>
using namespace std;
class Produit{
private:
	string m_titre;
	float m_prix;
	int m_qte; //quantité
	string m_descr; //description
	int m_id; //identifiant

public:
	Produit(string titre, float prix, int qte,string descr, int id);

	string getTitre();
	void setTitre(string titre);

	float getPrix();
	void setPrix(float prix);

	int getQte();
	void setQte(int qte);

	string getDescr();
	void setDescr(string descr);

	int getId();
	void setId(int id);

	void modifierQte(int qte);
	string ToString();

};

#endif 