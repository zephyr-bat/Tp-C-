/****
	* Titre : Chambre.h
	* Auteur : Armand Audeoud
	* Date : 15/11/19
	* Objectif : déclarer la classe Chambre.h
	****/

#include <iostream>
#include <string>

#ifndef CHAMBRE_H
#define CHAMBRE_H


enum Type{Simple, Deux, Suite};

class Chambre{
private:
	int m_id;
	float m_prix;
	Type m_type;

public:
	Chambre(int id, float prix, Type m_type);

	int getId() const;
	float getPrix() const;
	Type getType() const;

	void setId(int id);
	void setPrix(float prix);
	void setType(Type type);

};

#endif
