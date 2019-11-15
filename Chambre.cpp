/****
	* Titre : Chambre.cpp
	* Auteur : Armand Audeoud
	* Date : 15/11/19
	* Objectif : définir la classe Chambre.h
	****/

#include <iostream>
#include <string>


#include "Chambre.h"


Chambre::Chambre(int id, float prix, Type type){
	this -> m_id = id;
	this -> m_prix = prix;
	this -> m_type = type;
}

int Chambre::getId() const{
	return m_id;
}

float Chambre::getPrix() const{
	return m_prix;
}

Type Chambre::getType() const{
	return m_type;
}

void Chambre::setId(int id){
	m_id = id;
}

void Chambre::setPrix(float prix){
	m_prix = prix;
}

void Chambre::setType(Type type){
	m_type = type;
}