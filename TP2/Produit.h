/****
	* Titre : Produit.h
	* Auteur : Armand Audeoud
	* Date : 06/12/19
	* Objectif : déclarer la classe Produit
	****/

#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>

class Produit{
private:
	std::string m_titre;
	float m_prix;
	int m_qte; //quantité
	std::string m_descr; //description
	int m_id; //identifiant

public:
	Produit(std::string titre, float prix, int qte, std::string descr, int id);

	std::string getTitre();
	void setTitre(std::string titre);

	float getPrix();
	void setPrix(float prix);

	int getQte();
	void setQte(int qte);

	std::string getDescr();
	void setDescr(std::string descr);

	int getId();
	void setId(int id);

};

#endif 