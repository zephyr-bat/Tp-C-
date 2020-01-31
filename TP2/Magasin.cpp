/**
  * File: Magasin.h
  * Author: Franck GUILLERME
  * Date: 6 decembre 2019
  * Summary: Classe Magasin Tp2
*/
#include <iostream>
#include <string>
#include "Magasin.h"
using namespace std;

Magasin::Magasin() : Nom ("test"),ndcommande(0)
{
}
Magasin::Magasin(string nom):ndcommande(0)
{
	Nom = nom;
}

void Magasin::AjoutProduit(Produit *produit)
{
	m_produits.push_back(produit);
}

Produit * Magasin::GetProduit(string nom) 
{
	Produit * res = nullptr;
	for (Produit *p : m_produits)
	{
		if (p->getTitre() == nom)
		{
			res = p;
		}
	}
	return res;
}

void Magasin::ToStringProduit()
{
	for (Produit *p : m_produits)
	{
		cout << p->ToString() << endl;
	}
}

void Magasin::modifProduitquantite(string nom, int qua)
{
	for (Produit *p : m_produits)
	{
		if (p->getTitre() == nom) 
		{
			p->setQte(qua);
		}
	}

}

void Magasin::afficheProduit(string nom)
{
	for (Produit *p : m_produits)
	{
		if (p->getTitre() == nom)
		{
			cout << p->ToString()<< endl;
		}

	}
}

void Magasin::AjoutClient(int id ,string nom, string prenom) 
{
	m_clients.push_back(new ClientTp2(id, nom, prenom));
}

ClientTp2 * Magasin::GetClient(string nom)
{
	ClientTp2 * res = nullptr;
	for (ClientTp2 *c : m_clients)
	{
		if (c->getNom() == nom)
		{
			res = c;
		}
	}
	return res;
}

void Magasin::ToStringClient() 
{
	for (ClientTp2 *c : m_clients)
	{
		cout << c->ToString() << endl;
	}
}

void Magasin::afficheClient(string nom) 
{
	for (ClientTp2 *c : m_clients)
	{
		if (c->getNom() == nom)
		{
			cout << c->ToString()<< endl;
		}
	}
}

void Magasin::afficheClient(int id)
{
	for (ClientTp2 *c : m_clients)
	{
		if (c->getid() == id)
		{
			cout << c->ToString()<<endl;
		}
	}
}

void Magasin::AjoutProduitPourClient(string nomProduit, string nomClient) 
{
	ClientTp2 *client = GetClient(nomClient);
	Produit * produit = GetProduit(nomProduit);
	if (client != nullptr && produit !=nullptr) 
	{
		client->AjoutProduit(produit);
	}
}

void Magasin::SupprimeProduitPourClient(string nomProduit, string nomClient)
{
	ClientTp2 *client = GetClient(nomClient);
	Produit * produit = GetProduit(nomProduit);
	if (client != nullptr && produit != nullptr)
	{
		client->SupprimerProduit(produit->getTitre());
	}
}

void Magasin::ModifQtePourClient(string nomProduit, int Qte, string nomClient) 
{
	ClientTp2 *client = GetClient(nomClient);
	Produit * produit = GetProduit(nomProduit);
	if (client != nullptr && produit != nullptr)
	{
		client->modifproduitQuantite(produit->getTitre(),Qte);
	}
}

void Magasin::ValidationCommande(string nom) 
{
	ClientTp2 *client = GetClient(nom);
	if (client) {
		if (!client->getListeProduits().empty()) {
			m_Commandes.push_back(new Commande(ndcommande,client, client->getListeProduits(), true));
			ndcommande++;
			client->ViderPanier();			
		}
	}
}

Commande * Magasin::GetCommande(int id)
{
	Commande * res = nullptr;
	for (Commande *com : m_Commandes)
	{
		if (com->Getid() == id)
		{
			res = com;
		}
	}
	return res;
}

void Magasin::ChangementStatutCommande(int id,bool statut) 
{
	Commande* commande = this->GetCommande(id);
	if (commande) {
		commande->SetStatut(statut);
	}
}

void Magasin::ToStringCommande() 
{
	for (Commande *Com : m_Commandes)
	{
		if (Com != nullptr) {
			cout << Com->ToString() << endl;
		}
	}
}

void Magasin::afficheCommandeClient(string nom) 
{
	for (Commande *com : m_Commandes)
	{
		if (com->GetClient()->getNom() == nom)
		{
			cout << com->ToString() << endl;
		}
	}
}

