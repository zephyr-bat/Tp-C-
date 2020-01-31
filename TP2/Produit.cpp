/****
	* Titre : Produit.cpp
	* Auteur : Armand Audeoud
	* Date : 06/12/19
	* Objectif : définir la classe Produit
	****/

#include <iostream>
#include <string>
#include "Produit.h"
using namespace std;

Produit::Produit() : m_titre(""), m_prix(0.0), m_qte(0), m_descr(""), m_id(0){

}
Produit::Produit(string titre, double prix, int qte, string descr, int id) {
	m_titre = titre;
	m_prix = prix;
	m_qte = qte;
	m_descr = descr;
	m_id = id;
}


string Produit::getTitre() {
	return m_titre;
}


void Produit::setTitre(string titre) {
	this->m_titre = titre;
}


double Produit::getPrix() {
	return m_prix;
}

void Produit::setPrix(float prix) {
	this->m_prix = prix;
}


int Produit::getQte() {
	return m_qte;
}

void Produit::setQte(int qte) {
	this->m_qte = qte;
}


string Produit::getDescr() {
	return m_descr;
}

void Produit::setDescr(string descr) {
	this->m_descr = descr;
}


int Produit::getId() {
	return m_id;
}

void Produit::setId(int id) {
	this->m_id = id;
}

void Produit::modifierQte(int qte) {
	cout << "entrer la nouvelle quantité : ";
	cin >> qte;

	Produit::setQte(qte);
}

string Produit::ToString() {
	string info = "";
	info =  getTitre() + "|" + getDescr() + "|" + to_string(getQte()) + "|" + to_string(getPrix());
	return info;
}

