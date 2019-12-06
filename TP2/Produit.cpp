/****
	* Titre : Produit.cpp
	* Auteur : Armand Audeoud
	* Date : 06/12/19
	* Objectif : définir la classe Produit
	****/


#include <string>
#include <iostream>

#include "Produit.h"

Produit::Produit(std::string titre, float prix, int qte, std::string descr, int id){
	m_titre = titre;
	m_prix = prix;
	m_qte = qte;
	m_descr = descr;
	m_id = id;
}


std::string Produit::getTitre(){
	return m_titre;
}


void Produit::setTitre(std::string titre){
	this -> m_titre = titre;
}


float Produit::getPrix(){
	return m_prix;
}

void Produit::setPrix(float prix){
	this -> m_prix = prix;
}


int Produit::getQte(){
	return m_qte;
}

void Produit::setQte(int qte){
	this -> m_qte = qte;
}


std::string Produit::getDescr(){
	return m_descr;
}

void Produit::setDescr(std::string descr){
	this ->  m_descr = descr;
}


int Produit::getId(){
	return m_id;
}

void Produit::setId(int id){
	this -> m_id = id;
}


void Produit::modifierQte(int qte){
	std::cout << "entrer la nouvelle quantité : ";
	std::cin >> qte;

	Produit::setQte(qte);

}
