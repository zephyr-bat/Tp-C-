/****
	* Titre : Commande.cpp
	* Auteur : Armand Audeoud
	* Date : 17/12/19
	* Objectif : définir la classe Commande
	****/

#include "commande.h"
#include <iostream>

using namespace std;

Commande::Commande():idCommande(0),client(nullptr),listeProduit(vector<Produit*>()),statut(false)
{
}

Commande::Commande(int id,ClientTp2* Client, vector<Produit*> ListeProduit, bool Statut):idCommande(id),client(Client),statut(Statut)
{
	for (Produit* p : ListeProduit) 
	{
		listeProduit.push_back(p);
	}
}

string Commande::ToString() 
{
	string info = "";
	info =to_string(idCommande) + "|" + client->getNom() + "|";
	for (Produit *p : listeProduit)
	{
		info += ":"+p->ToString()+":";
	}
	if (statut)
	{
		info += "| Valide";
	}
	else 
	{
		info += "| non Valide";
	}

	return info;
}

void  Commande::SetStatut(bool Statut)
{
	statut = Statut;
}
int  Commande::Getid()
{
	return idCommande;
}

ClientTp2* Commande::GetClient()
{
	return client;
}