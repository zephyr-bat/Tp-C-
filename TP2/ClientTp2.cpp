/**
  * File: Client.cpp
  * Author: Franck GUILLERME
  * Date: 24 octobre 2019
  * Summary: Classe Client Tp1
*/
#include <iostream>
#include <string>
#include "ClientTp2.h"
using namespace std;

ClientTp2::ClientTp2():id(0),Nom(""),Prenom("")
{
}
//constructeur du client 
ClientTp2::ClientTp2(int id, string nom, string prenom)
{
	this->id = id;
	this->Nom = nom;
	this->Prenom = prenom;
}

//geteur id du client
int ClientTp2::getid() const
{
	return id;
}

//geteur du nom client
string ClientTp2::getNom() const
{
	return Nom;
}

//geteur du prenom client
string ClientTp2::getPrenom() const
{
	return Prenom;
}
string ClientTp2::ToString()
{
	string info = getid() +"|"+getNom() + "|" + getPrenom();
	return info;
}
//seteur du nom client
void ClientTp2::setNom(string nom)
{
	this->Nom = nom;
}

//seteur du Prenom client
void ClientTp2::setPrenom(string prenom)
{
	this->Prenom = prenom;
}

vector<Produit*> ClientTp2::getListeProduits() const 
{
	return this->Panier;
}
// fonction de modification du client 
void ClientTp2::ChangeClient(string nom, string prenom)
{
	setNom(nom);
	setPrenom(prenom);
}

void ClientTp2::AjoutProduit(Produit *produit)
{
	Panier.push_back(produit);
}

void ClientTp2::AffichePanier()
{
	for (Produit *p : Panier)
	{
		std::cout << p->ToString() << endl;
	}
}

void ClientTp2::modifproduitQuantite(string nom, int qte) 
{
	if (Panier.size()>0) 
	{
		for (Produit *p : Panier)
		{
			if (p->getTitre() == nom) 
			{
				p->setQte(qte);
			}
		}
	}
}

void ClientTp2::SupprimerProduit(string nom) 
{
	for (int i = 0;i<Panier.size(); i++) 
	{
		if (Panier.at(i)->getTitre() == nom) 
		{
			Panier.erase(Panier.begin() + i);
		}
	}

}

void ClientTp2::ViderPanier() 
{
	Panier.clear();
}